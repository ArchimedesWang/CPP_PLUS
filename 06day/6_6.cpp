#include <iostream>
using namespace std;

// 函数，接收一个参数，使用局部变量和静态变量
void testFunction(int param) {
    int localVar = 0;           // 局部变量，每次调用重置为0
    static int staticVar = 0;   // 静态局部变量，生命周期贯穿整个程序

    localVar++;
    staticVar++;

    cout << "参数 param = " << param << endl;
    cout << "局部变量 localVar = " << localVar << endl;
    cout << "静态变量 staticVar = " << staticVar << endl;
    cout << "------------------------------" << endl;
}

int main() {
    // 连续调用三次 testFunction，每次传入不同参数
    testFunction(5);
    testFunction(10);
    testFunction(15);

    return 0;
}

