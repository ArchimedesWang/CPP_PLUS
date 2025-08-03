#include <iostream>
using namespace std;

int f() {
    static int staticVar = 0;   // 静态局部变量，生命周期贯穿整个程序

    return staticVar++;
}

int main() {
	int i, j;
	cout << "请输入调用次数" << endl;
	cin >> i;
	if (i < 0) {
		cout << "调用次数必须大于0" << endl;
		return -1;
	}
	for (i; i >= 0; i--)
		j = f();
	cout << "调用了" << j << "次" << endl;
    return 0;
}

