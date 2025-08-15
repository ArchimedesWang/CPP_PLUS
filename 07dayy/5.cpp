#include <iostream>
using namespace std;

class Point {
	private:
		int x;
		int y;
	public:
		Point(int a = 0, int b = 0):x(a), y(b) {} 
		Point& move(int dx, int dy) {
			this->x += dx;
			this->y += dy;
			print();
			return *this;
		}

		void setX(int m) { x = m; }
		void setY(int n) { y = n; }
		int getX() const { return x; }
		int getY() const { return y; }
		void print() const { 
			cout << "(" << x << "," << y << ")" << endl;
		}
};

int main() {
	Point p;
	p.move(1, 1).move(1, 2);
	return 0;
}
