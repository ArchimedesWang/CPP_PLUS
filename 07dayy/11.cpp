#include <iostream>
using namespace std;

class Counter{
	private:
		static int count;

	public:
		Counter() { ++count; }
		~Counter() { --count; }

		static int getCounter() { return count; }
};

int Counter::count = 0;

int main() {
	Counter a;
	cout << a.getCounter() << endl;

	return 0;
}
