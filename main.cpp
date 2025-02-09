#include <iostream>
#include "Design.h"

int main() {

	int littleInput;
	int lotInput;
	int heapInput;
	
	std::cout << "Enter the number of littles, lots, and heaps for x" << std::endl;
	std::cout << "Littles: ";
	std::cin >> littleInput;
	std::cout << "Lots: ";
	std::cin >> lotInput;
	std::cout << "Heaps: ";
	std::cin >> heapInput;

	//std::cout << "\nx:" << std::endl;
	Design x(littleInput, lotInput, heapInput);
	//x.print();

	std::cout << "\nEnter the number of littles, lots, and heaps for y" << std::endl;
	std::cout << "Littles: ";
	std::cin >> littleInput;
	std::cout << "Lots: ";
	std::cin >> lotInput;
	std::cout << "Heaps: ";
	std::cin >> heapInput;

	//std::cout << "\ny:" << std::endl;
	Design y(littleInput, lotInput, heapInput);
	//y.print();
	
		int opPrompt{ 0 };

	std::cout << "\nWhat opperation do you want to do?" << std::endl;
	std::cout << "1. add\n2. subtract\n3. multiply\n4. divide\n5. compare\n6. print\n" << std::endl;

	std::cin >> opPrompt;
	std::cout << std::endl;

	if (opPrompt == 1) {
		std::cout << "Adding x and y" << std::endl;
		x + y;
		x.print();
	}
	else if (opPrompt == 2) {
		std::cout << "Subtacting x by y" << std::endl;
		x - y;
		x.print();
	}
	else if (opPrompt == 3) {
		std::cout << "Multiplying x and y" << std::endl;
		x* y;
		x.print();
	}
	else if (opPrompt == 4) {
		std::cout << "Dividing x by y" << std::endl;
		x / y;
		x.print();
	}
	else if (opPrompt == 5) {
		std::cout << "Comparing x and y" << std::endl;
		if (x == y) {
			std::cout << "The two positions are the same" << std::endl;
		}
		else {
			std::cout << "The two positions are not the same" << std::endl;
		}
	}
	else if (opPrompt == 6) {
		//std::cout << "Coverting x and y to a string" << std::endl;
		//std::cout << x << std::endl;
	}
	else {
		std::cout << "Invalid Opperation";
	}

    return 0;
} // main closer
