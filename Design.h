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

	//Operator Overloads
	//Should overload so you can do x + y not x = y + z
	void operator+(Design right);
	void operator-(Design right);
	void operator*(Design right);
	void operator/(Design right);
	bool operator==(Design right);
	//cout << x; 
	// "You have 10 heaps, 4 littles, 5 lots"
	//std::string operator<<(Design right);

	//functions
	Design condense(Design &input);
	int distBetween(Design x, Design y);
	//create a function that outputs the distance between 2 points for example in meters
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