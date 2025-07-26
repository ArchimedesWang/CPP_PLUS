#include <iostream>
#include "Sales_item.h"

int main(){
	Sales_item total, trans;
	int cnt = 1;
	if (std::cin >> total) {
		while (std::cin >> trans) {
			if (total.isbn() ==  trans.isbn()) {
				cnt++;
			} else {
				std::cout << "ISBN different!" << std::endl;
				return -1;
			}
		}
		std::cout << "Sum is " << cnt << std::endl;
	} else {
		std::cout << "No data!" << std::endl;
		return -1;
	}

	return 0;
}
