#include <iostream>
using namespace std;

class Point {
	private:
		int x;
		int y;
	public:
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
	p.setX(1);
	p.setY(2);
	p.print();

	return 0;
}
