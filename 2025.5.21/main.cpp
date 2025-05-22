// #include <iostream>
//
// using namespace std;
//
// class Base {
// public:
//     int m_A;
//
// protected:
//     int m_B;
//
// private:
//     int m_C;
// };
//
// //公共继承
// class Son:public Base {
//     public:
//     int m_D;
// };
//
// void test01() {
//     cout << sizeof(Son) << endl;
//     cout << sizeof(Base) << endl;
// }
//
// //父类中所有非静态成员属性都会被子类继承下去
// //父类中私有的成员属性，是被编译器给隐藏了，因此是访问不到的，但事实上确实是继承下去了
//
// int main() {
//     test01();
//
//     return 0;
// }

//继承中构造和析构顺序

// #include <iostream>
//
// using namespace std;
//
// class Base {
// public:
//     Base() {
//         cout << "Base构造函数" << endl;
//     }
//
//     ~Base() {
//         cout << "Base析构函数" << endl;
//     }
// };
//
// class Son: public Base {
// public:
//     Son() {
//         cout << "Son构造函数" << endl;
//     }
//
//     ~Son() {
//         cout << "Son析构函数" << endl;
//     }
// };
//
// void test01() {
//     // Base base;
//
//     Son son;
// }
//
// int main() {
//     test01();
//
//     return 0;
// }
//
// //继承中，先调用父类的构造函数，再调用子类的构造函数，析构顺序和构造相反（先有爸再有儿子）

//继承同名成员处理方式

// #include <iostream>
//
// using namespace std;
//
// class Base {
// public:
//     int m_A;
//
//     Base():m_A(100) {}
//
//     void func() {
//         cout << "Base - func()调用" << endl;
//     }
//
//     void func(int a) {
//         cout << "Son - func(int a)调用" << endl;
//     }
// };
//
// class Son: public Base {
// public:
//     int m_A;
//
//     Son():m_A(200) {}
//
//     void func() {
//         cout << "Son - func()调用" << endl;
//     }
// };
//
// //同名的成员属性的处理方式
// void test01() {
//     Son s;
//
//     cout << s.m_A << endl;
//     //如果通过子类对象，访问到父类中的同名成员，需要加作用域
//     cout << s.Base::m_A << endl;
// }
//
// //同名的成员函数的处理方式
// void test02() {
//     Son s;
//     s.func();//直接调用，调用是子类的的同名成员
//     s.Base::func();
//
//     //如果子类中出现了和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有的同名成员函数（所有重载版本全部隐藏）
//     //如果想访问到父类中被隐藏的同名成员函数，需要加作用域
//     s.Base::func(100);
// }
//
// int main() {
//     test02();
//
//     // test01();
//
//     return 0;
// }

#include <iostream>
#include <random>//生成随机数的头文件

using namespace std;

// 生成100个随机整数（范围1-1000）
vector<int> generate_random_numbers() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 1000);
    vector<int> nums(100);

    for (int i = 0; i < 100; ++i) {
        nums[i] = dis(gen);
    }
    return nums;
}

// 插入排序
void insertion_sort(vector<int>& arr) {
    for (int i = 1; i < arr.size(); ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    vector<int> nums = generate_random_numbers();
    cout << "原始数据: ";

    //用范围for循环直接遍历数据

    for (int num : nums) cout << num << " ";
    cout << "\n\n";

    vector<int> arr;

    arr = nums;
    insertion_sort(arr);
    cout << "插入排序结果: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << "\n\n";

    return 0;
}


