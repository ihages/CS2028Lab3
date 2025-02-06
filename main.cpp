#include <iostream>
#include "Design.h"

int main() {
	std::cout << "When running the function with no parameters," << std::endl;
	Design::Design().print();

	/*****
	* changes after implementation to design.h: 
	* put constructors in main rather than design.h
	*****/


	int littleInput;
	int lotInput;
	int heapInput;
	
	std::cout << "enter the number of littles, lots, and heaps" << std::endl;
	std::cin >> littleInput;
	std::cin >> lotInput;
	std::cin >> heapInput;

	Design::Design(littleInput, lotInput, heapInput).print();

	littleInput = 0;
	lotInput = 0;
	heapInput = 0;
    
    std::cout << "Enter the number of littles: " << std::endl;
	std::cin >> littleInput;

	Design::Design(littleInput).print();



    return 0;
} // main closer