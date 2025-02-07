#pragma once

#ifndef _DESIGN_HPP
#define _DESIGN_HPP


#include <iostream>
#include <string>

class Design {
private:
	int little;
	int lot;
	int heap;
public:
	//getter funtions
	int  getLittle() const{
		return little;
	}
	int  getLot() const{
		return lot;
	}
	int  getHeap() const{
		return heap;
	}

	//setter funtions
	void setLittle(int i) {
		little = i;
	}
	void setLot(int o) {
		lot = o;
	}
	void setHeap(int h) {
		heap = h;
	}

	//constructor funtions
	Design() {
		little = 0;
		lot = 0;
		heap = 0;
	}
		//no params
		//set to default values
	
	Design(int i, int o, int h) {
		little = i;
		lot = o;
		heap = h;
	}
		//all three params
		//set little, lot, and heapS
	
	Design(int i) {
		little = i;
		lot = 0;
		heap = 0;
	}
		//only little
		//set little
	

	//print function
	void print() const{
		std::cout << "Littles: " << little << std::endl;
		std::cout << "Lots: " << lot << std::endl;
		std::cout << "Heaps: " << heap << std::endl;
	}

	template <class T> //template just so the input can be doubles or ints depending on how the project goes
	std::string toString(T input) {
		std::string str = to_string(input);
		return str;
	}

	//Operator Overloads
	Design operator+(Design right);
	Design operator-(Design right);
	Design operator*(Design right);
	Design operator/(Design right);
	bool operator==(Design right);
	std::string operator<<(Design right);

	//functions
	Design condense(Design &input);
};


//conversion funtion definitions
/*
Design();
Design(double, double, double);
Design(double);

void  Design::print() const
*/
// little.print()

#endif
