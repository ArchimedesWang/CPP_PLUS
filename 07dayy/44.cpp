#include <iostream>
using namespace std;


class Rectangle{
	private:
		int x, y;

	public:
		Rectangle(int a, int b) : x(a), y(b) {}
		friend class RectanglePrinter;
};

class RectanglePrinter{
	public:
		void Print(Rectangle &rec){
			cout << "x:" << rec.x << endl;
		}

};

int main() {
	Rectangle rect(1, 2);
	RectanglePrinter p;
	p.Print(rect);
	return 0;
}
