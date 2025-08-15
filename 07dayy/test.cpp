#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point(int a = 0, int b = 0) : x(a), y(b) { cout << "构造函数调用" << endl; }
    ~Point() { cout << "析构函数调用" << endl; }
    void print() const { cout << x << "," << y << endl; }
};

int main() {
    Point p1;       // 默认构造
}

