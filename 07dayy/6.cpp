#include <iostream>
using namespace std;

class Point{
	private:
		int x, y;

	public:
		Point(int a = 0, int b = 0):x(a), y(b){}
		void setX(int a) { x = a; }
		void setY(int b) { y = b; }
		int getX() const { return x; }
		int getY() const { return y; }
};

class Rectangle{
	private:
		Point topLeft, bottomRight;

	public:
		Rectangle(Point t1, Point t2) : 
			topLeft(t1), bottomRight(t2) {}
		int area() const{
			int wight = bottomRight.getX() - topLeft.getX();
			int height = bottomRight.getY() - topLeft.getY();
			return wight * height;
		}
};

int main() {
	Rectangle rect(Point(0, 0), Point(1, 2));
	cout << "Area:" << rect.area() << endl;

	return 0;
}
