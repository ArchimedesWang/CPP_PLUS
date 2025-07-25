#include <iostream>
#include "Sales_item.h"

int main(){
	Sales_item trans1, trans2;
	int num = 1;

	if (std::cin >> trans1) {
		while (std::cin >> trans2) {
			if (trans1.isbn() == trans2.isbn()){
				num++;
			} else {
				std::cout << trans1.isbn() << " has " << num << " numbers.";
				return -1;
			}
		}
		std::cout << trans1.isbn() << " has " << num << " numbers.";
	} else {
		std::cout << "No book!" << std::endl;
		return -1;
	}

	return 0;
}
