#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vInt;
    char cont = 'y';
    int i;

    cout << "请输入整数（输入非数字结束）：" << endl;
    while (cin >> i) {
        vInt.push_back(i);
        
        cout << "是否继续输入？(y/n)：";
        cin >> cont;
        if (cont != 'y' && cont != 'Y')
            break;
    }

    const auto delta = vInt.size();
    
    int a[delta];
    for (int i = 0; i < delta; i++) 
        a[i] = vInt[i];

    cout << "数组内容为：";
    for (int i = 0; i < delta; i++) {
        cout << a[i] << " ";
    }
    cout << endl;


    return 0;
}

