#include <iostream>
#include "Design.h"

int main() {
	

	/*****
	* std::cout << "When running the function with no parameters," << std::endl;
	* Design d1;
	* d1.print();
	* 
	* changes after implementation to design.h: 
	* put constructors in main rather than design.h
	*****/

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

	char contPrompt{ 'y' };

	while (contPrompt == 'y') {
		int opPrompt{ 0 };

		std::cout << "\nWhat opperation do you want to do?" << std::endl;
		std::cout << "1. add\n2. subtract\n3. multiply\n4. divide\n5. compare\n6. print\n7. convert to meters" << std::endl;

		std::cin >> opPrompt;
		std::cout << std::endl;

		if (opPrompt == 1) {
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

			std::cout << "\nAdding y to x" << std::endl;
			x + y;
			x.print();
		}
		else if (opPrompt == 2) {
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

			std::cout << "\nSubtracting x by y" << std::endl;
			x - y;
			x.print();
		}
		else if (opPrompt == 3) {
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

			std::cout << "\nMultiplying x by y" << std::endl;
			x* y;
			x.print();
		}
		else if (opPrompt == 4) {
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

			std::cout << "\nDividing x by y" << std::endl;
			x / y;
			x.print();
		}
		else if (opPrompt == 5) {
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

			std::cout << "\nComparing x to y" << std::endl;
			if (x == y) {
				std::cout << "The two positions are the same" << std::endl;
			}
			else {
				std::cout << "The two positions are not the same" << std::endl;
			}
		}
		else if (opPrompt == 6) {
			std::cout << "\nCoverting x to a string" << std::endl;
			x.print();
			//std::cout << x << std::endl;
		}
		else if(opPrompt== 7){
			std::cout << "\nx in meters is " << std::fixed<<std::setprecision(5) << x.meters(x) << " meters." << std::endl;
		}
		else {
			std::cout << "Invalid Opperation";
		}

		std::cout << "\nWould you like to continue? y/n" << std::endl;
		std::cin >> contPrompt;
		while (contPrompt != 'y' && contPrompt != 'n'){
			std::cout << "Invalid Response. Try again." << std::endl;
		std::cin >> contPrompt;
		}	
	} // while closer


    return 0;
} // main closer
