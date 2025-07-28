#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 修正1：创建空向量，而不是初始化为10个元素
    vector<int> vInt;
    // 或者保持初始大小但使用赋值而非push_back：
    // vector<int> vInt(10);
    // for (int i = 0; i < vInt.size(); i++){
    //     vInt[i] = i;
    // }
    
    // 向向量中添加0-9共10个元素
    for (int i = 0; i < 10; i++){
        vInt.push_back(i);
    }

    // 输出原始元素
    cout << "原始元素：" << endl;
    for (int i = 0; i < vInt.size(); i++){
        cout << vInt[i] << endl;
    }
    

    // 修正2：使用正确的迭代器类型
    for (vector<int>::iterator it = vInt.begin(); 
         it != vInt.end(); it++) {
        (*it) *= 2;  // 每个元素乘以2
    }

    // 输出修改后的元素
    cout << "乘以2后的元素：" << endl;
    for (int i = 0; i < vInt.size(); i++){
        cout << vInt[i] << endl;
    }

    return 0;
}

