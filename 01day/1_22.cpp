#include <iostream>
#include "Sales_item.h"

int main(){
	Sales_item total, trans;
	if (std::cin >> total) {
		while (std::cin >> trans) {
			if (compareIsbn(total, trans)) {
				total += trans;
			} else {
				std::cout << "ISBN different!" << std::endl;
				return -1;
			}
		}
		std::cout << "Sum is " << total << std::endl;
	} else {
		std::cout << "No data!" << std::endl;
		return -1;
	}

	return 0;
}
