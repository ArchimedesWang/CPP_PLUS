#include <iostream>
using namespace std;

class Point {
	public:
		int x;
		int y;
		void print() const {
			cout << "(" << x << "," << y << ")" << endl;
		}
};

int main() {
	Point p;
	p.x = 2;
	p.y = 3;
	p.print();

	return 0;
}
