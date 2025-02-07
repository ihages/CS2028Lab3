#include <iostream>
#include "Design.h"

int main() {
	std::cout << "When running the function with no parameters," << std::endl;
	Design d1;
	d1.print();

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

	std::cout << "d2:" << std::endl;
	Design d2(littleInput, lotInput, heapInput);
	d2.print();

	/*
	littleInput = 0;
	lotInput = 0;
	heapInput = 0;
    
    std::cout << "Enter the number of littles: " << std::endl;
	std::cin >> littleInput;
	*/

	
	std::cout << "d3:" << std::endl;
	Design d3(littleInput+1,lotInput,heapInput+1);
	d3.print();

	std::cout << "Adding d2 and d3" << std::endl;
	d2 + d3;
	d2.print();
/*	Needs to be updated
	std::cout << "Subtacting d2 and d3" << std::endl;
	d2 - d3;
	d2.print();

	std::cout << "Multiplying d2 and d3" << std::endl;
	d2 * d3;
	d2.print();

	std::cout << "Dividing d2 and d3" << std::endl;
	d2 / d3;
	d2.print();

	std::cout << "Comparing d2 and d3" << std::endl;
	std::cout << (d2 == d3) << std::endl;
*/
	//std::cout << "Coverting d2 to a string" << std::endl;
	//std::cout << d2 << std::endl;

    return 0;
} // main closer