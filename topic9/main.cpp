#include <iostream>
#include <vector>
#include <stack>
#include <map>
#include <sstream>
#include <iomanip>
#include <cctype>
#include <limits>
#include <stdexcept>
#include <algorithm>  // 用于count函数

using namespace std;

//词法分析模块//
vector<string> tokenize(const string& expr) {
    vector<string> tokens;    // 存储解析后的token序列
    string numStr;           // 临时存储数字字符串
    bool negativeAllowed = true; // 标记当前是否允许负号（用于区分负号和减号）

    // 遍历输入字符串的每个字符
    for (size_t i = 0; i < expr.size(); ++i) {
        char c = expr[i];

        // 处理负号（仅当出现在表达式开头或左括号后时视为负数符号）
        if (c == '-' && (negativeAllowed || (i > 0 && expr[i-1] == '('))) {
            numStr += c;
            negativeAllowed = false;  // 负号已使用，后续不允许立即再出现负号
            continue;
        }

        // 处理数字和小数点
        if (isdigit(c) || c == '.') {
            numStr += c;
            negativeAllowed = false;  // 数字后不能直接跟负号
        }
        // 处理运算符和括号
        else {
            // 如果已积累数字字符，先处理数字
            if (!numStr.empty()) {
                // 校验数字格式：不允许出现多个小数点
                if (count(numStr.begin(), numStr.end(), '.') > 1) {
                    throw invalid_argument("无效数字格式: " + numStr);
                }
                tokens.push_back(numStr);
                numStr.clear();
            }

            // 处理非空格字符
            if (!isspace(c)) {
                // 检查是否为合法运算符或括号
                if (string("+-*/()").find(c) == string::npos) {
                    throw invalid_argument("无效字符: " + string(1, c));
                }
                tokens.push_back(string(1, c));
                // 左括号后允许出现负号（如"(-3+5)"的情况）
                negativeAllowed = (c == '(');
            } else {
                negativeAllowed = false;  // 空格后不允许直接出现负号
            }
        }
    }

    // 处理最后一个未提交的数字
    if (!numStr.empty()) {
        if (count(numStr.begin(), numStr.end(), '.') > 1) {
            throw invalid_argument("无效数字格式: " + numStr);
        }
        tokens.push_back(numStr);
    }

    return tokens;
}

//中缀转后缀表达式模块
vector<string> infixToPostfix(const vector<string>& tokens) {
    vector<string> output;    // 存储后缀表达式结果
    stack<string> opStack;    // 运算符栈
    // 定义运算符优先级（数值越大优先级越高）
    map<string, int> precedence = {
        {"+", 1}, {"-", 1}, {"*", 2}, {"/", 2}, {"(", 0}
    };

    for (const string& token : tokens) {
        // 处理数字（包括负数）
        if (isdigit(token[0]) || (token.size() > 1 && (isdigit(token[1]) || token[0] == '-'))) {
            output.push_back(token);
        }
        // 处理左括号：直接入栈
        else if (token == "(") {
            opStack.push(token);
        }
        // 处理右括号：弹出栈元素直到遇到左括号
        else if (token == ")") {
            while (!opStack.empty() && opStack.top() != "(") {
                output.push_back(opStack.top());
                opStack.pop();
            }
            if (opStack.empty()) {
                throw invalid_argument("括号不匹配");
            }
            opStack.pop();  // 弹出左括号但不加入输出
        }
        // 处理运算符
        else {
            // 弹出栈顶优先级更高或相等的运算符
            while (!opStack.empty() && precedence[opStack.top()] >= precedence[token]) {
                output.push_back(opStack.top());
                opStack.pop();
            }
            opStack.push(token);
        }
    }

    // 弹出栈中剩余运算符
    while (!opStack.empty()) {
        if (opStack.top() == "(") {
            throw invalid_argument("括号不匹配");
        }
        output.push_back(opStack.top());
        opStack.pop();
    }

    return output;
}

//后缀表达式求值模块
double evaluatePostfix(const vector<string>& postfix) {
    stack<double> st;  // 操作数栈

    for (const string& token : postfix) {
        // 处理数字（包括负数）
        if (isdigit(token[0]) || (token.size() > 1 && (isdigit(token[1]) || token[0] == '-'))) {
            try {
                st.push(stod(token));  // 转换为double类型
            } catch (...) {
                throw invalid_argument("无效数字: " + token);
            }
        }
        // 处理运算符
        else {
            if (st.size() < 2) {
                throw invalid_argument("表达式不完整");
            }
            double b = st.top(); st.pop();  // 第二个操作数
            double a = st.top(); st.pop();  // 第一个操作数

            if (token == "+") st.push(a + b);
            else if (token == "-") st.push(a - b);
            else if (token == "*") st.push(a * b);
            else if (token == "/") {
                if (b == 0) throw runtime_error("除数不能为零");
                st.push(a / b);
            }
        }
    }

    // 最终栈中应只剩一个结果
    if (st.size() != 1) {
        throw invalid_argument("表达式不完整");
    }
    return st.top();
}

//主控制模块
int main() {
    int choice;
    do {
        string expr;
        // 表达式输入循环（确保非空输入）
        do {
            cout << "请输入算式：" << endl;
            getline(cin, expr);
            if (expr.empty()) {
                cout << "输入不能为空！" << endl;
            }
        } while (expr.empty());

        try {
            // 表达式处理三部曲
            vector<string> tokens = tokenize(expr);        // 词法分析
            vector<string> postfix = infixToPostfix(tokens); // 语法转换
            double result = evaluatePostfix(postfix);       // 求值计算

            // 输出结果（保留两位小数）
            cout << expr << " = " << fixed << setprecision(2) << result << endl;
        } catch (const exception& e) {
            cout << "计算错误: " << e.what() << endl;
        }

        // 处理继续运行选择
        bool valid = false;
        do {
            cout << "是否继续?\n1: 是\n2: 否\n请选择: ";
            if (!(cin >> choice)) {  // 处理非数字输入
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
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 清除输入缓冲区
        } while (!valid);

    } while (choice == 1);  // 选择1继续运行

    cout << "感谢使用计算器！" << endl;
    return 0;
}