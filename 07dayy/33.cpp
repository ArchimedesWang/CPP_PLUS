#include <iostream>
#include <string>
using namespace std;

class Box{
	private:
		int width, height;
	public:
		Box(int a, int b):width(a), height(b) {}
		friend void area(Box box);
};

void area(Box box){
	cout << box.width << " " << box.height << endl;
}

int main() {
	Box box(1, 2);
	area(box);
	return 0;
}
