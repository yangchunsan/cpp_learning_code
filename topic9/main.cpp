#include <iostream>
#include <vector>
#include <stack>
#include <map>
#include <sstream>
#include <iomanip>
#include <cctype>
#include <limits>
#include <stdexcept>
#include <algorithm>  // 添加缺失的头文件

using namespace std;

vector<string> tokenize(const string& expr) {
    vector<string> tokens;
    string numStr;
    bool negativeAllowed = true; // 允许负号出现

    for (size_t i = 0; i < expr.size(); ++i) {
        char c = expr[i];

        // 处理负号（作为负数的一部分）
        if (c == '-' && (negativeAllowed || (i > 0 && expr[i-1] == '('))) {
            numStr += c;
            negativeAllowed = false;
            continue;
        }

        if (isdigit(c) || c == '.') {
            numStr += c;
            negativeAllowed = false;
        } else {
            if (!numStr.empty()) {
                // 验证数字格式
                if (count(numStr.begin(), numStr.end(), '.') > 1) {
                    throw invalid_argument("无效数字格式: " + numStr);
                }
                tokens.push_back(numStr);
                numStr.clear();
            }
            if (!isspace(c)) {
                if (string("+-*/()").find(c) == string::npos) {
                    throw invalid_argument("无效字符: " + string(1, c));
                }
                tokens.push_back(string(1, c));
                negativeAllowed = (c == '('); // 在左括号后允许负号
            } else {
                negativeAllowed = false;
            }
        }
    }

    if (!numStr.empty()) {
        if (count(numStr.begin(), numStr.end(), '.') > 1) {
            throw invalid_argument("无效数字格式: " + numStr);
        }
        tokens.push_back(numStr);
    }

    return tokens;
}

vector<string> infixToPostfix(const vector<string>& tokens) {
    vector<string> output;
    stack<string> opStack;
    map<string, int> precedence = {
        {"+", 1}, {"-", 1}, {"*", 2}, {"/", 2}, {"(", 0}
    };

    for (const string& token : tokens) {
        if (isdigit(token[0]) || (token.size() > 1 && (isdigit(token[1]) || token[0] == '-'))) {
            output.push_back(token);
        } else if (token == "(") {
            opStack.push(token);
        } else if (token == ")") {
            while (!opStack.empty() && opStack.top() != "(") {
                output.push_back(opStack.top());
                opStack.pop();
            }
            if (opStack.empty()) {
                throw invalid_argument("括号不匹配");
            }
            opStack.pop();
        } else {
            while (!opStack.empty() && precedence[opStack.top()] >= precedence[token]) {
                output.push_back(opStack.top());
                opStack.pop();
            }
            opStack.push(token);
        }
    }

    while (!opStack.empty()) {
        if (opStack.top() == "(") {
            throw invalid_argument("括号不匹配");
        }
        output.push_back(opStack.top());
        opStack.pop();
    }

    return output;
}

double evaluatePostfix(const vector<string>& postfix) {
    stack<double> st;
    for (const string& token : postfix) {
        if (isdigit(token[0]) || (token.size() > 1 && (isdigit(token[1]) || token[0] == '-'))) {
            try {
                st.push(stod(token));
            } catch (...) {
                throw invalid_argument("无效数字: " + token);
            }
        } else {
            if (st.size() < 2) {
                throw invalid_argument("表达式不完整");
            }
            double b = st.top(); st.pop();
            double a = st.top(); st.pop();

            if (token == "+") st.push(a + b);
            else if (token == "-") st.push(a - b);
            else if (token == "*") st.push(a * b);
            else if (token == "/") {
                if (b == 0) throw runtime_error("除数不能为零");
                st.push(a / b);
            }
        }
    }
    if (st.size() != 1) {
        throw invalid_argument("表达式不完整");
    }
    return st.top();
}

int main() {
    int choice;
    do {
        string expr;
        // 处理表达式输入
        do {
            cout << "请输入算式：" << endl;
            getline(cin, expr);
            if (expr.empty()) {
                cout << "输入不能为空！" << endl;
            }
        } while (expr.empty());

        try {
            vector<string> tokens = tokenize(expr);
            vector<string> postfix = infixToPostfix(tokens);
            double result = evaluatePostfix(postfix);
            cout << expr << " = " << fixed << setprecision(2) << result << endl;
        } catch (const exception& e) {
            cout << "计算错误: " << e.what() << endl;
        }

        // 处理继续选择
        bool valid = false;
        do {
            cout << "是否继续?\n1: 是\n2: 否\n请选择: ";
            if (!(cin >> choice)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "无效输入，请重新输入！" << endl;
                continue;
            }
            if (choice == 1 || choice == 2) {
                valid = true;
            } else {
                cout << "请输入1或2！" << endl;
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } while (!valid);

    } while (choice == 1);

    cout << "感谢使用计算器！" << endl;
    return 0;
}