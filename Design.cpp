#include "Design.h"
#include <iostream>
#include <string>
#include <cmath>

/*
Function: 
    + operator overload
Input:
    Design right - the object that is being added
Goal: 
	Adds one Design object to another, 
    x + y, updates x
    After adding them it uses the condense function to reduce the size of the different members
Returns:
	void none, updates attached Design object
*/
void Design::operator+(const Design &right){
    this->little += right.little;
    this->lot += right.lot;
    this->heap += right.heap;
    (*this).condense(*this);
}

/*
Function: 
    - operator overload
Input:
    Design right - the object that is being added
Goal: 
	Subtracts one Design object to another, 
    x - y, updates x
    After subtracting them it uses the condense function to reduce the size of the different members
Returns:
	void none, updates attached Design object
*/
void Design::operator-(const Design &right){
    this->little -= right.little;
    this->lot -= right.lot;
    this->heap -= right.heap;
    (*this).condense(*this);
}

/*
Function: 
    * operator overload
Input:
    Design right - the object that is being added
Goal: 
	Multiplies one Design object with another, 
    x * y, updates x
    After multiplying them it uses the condense function to reduce the size of the different members
Returns:
	void none, updates attached Design object
*/
void Design::operator*(const Design &right) {
    this->little *= right.little;
    this->lot *= right.lot;
    this->heap *= right.heap;
    (*this).condense(*this);
}

/*
Function: 
    / operator overload
Input:
    Design right - the object that is being added
Goal: 
    Divides one Design object to another, 
    x / y, updates x
    After dividing them it uses the condense function to reduce the size of the different members
Returns:
	void none, updates attached Design object
*/
void Design::operator/(const Design &right) {
    this->little /= right.little;
    this->lot /= right.lot;
    this->heap /= right.heap;
    (*this).condense(*this);
}

/*
Function: 
    == operator overload
Input:
    Design right - the object that is being added
Goal: 
	Compares two Design objects to one another
    x == y
Returns:
	true if all values of both objects are the exact same,
    false if not all values are equal
*/
bool Design::operator==(const Design &right) {
    if ((little == right.little) && (lot == right.lot) && (heap == right.heap)){
        return true;
    } else {
        return false;
    }
}

/*
Function: 
	<< operator overload
Input:
    ostream stream - the stream which will be used, generally cout
    Design right - the Design object that will be outputted
Goal: 
	Ouput the given object to cout
Returns:
	the object in 3 lines,
    Little: 
    Lot:
    Heap:
    with values for each on their line
*/
//got help from:
//https://stackoverflow.com/questions/476272/how-can-i-properly-overload-the-operator-for-an-ostream
std::ostream& operator<<(std::ostream& stream, const Design &right){
    stream << "Little: " << right.little << "\n";
    stream << "Lot: " << right.lot << "\n";
    stream << "Heap: " << right.heap;
    return stream;
}

/*
Function: 
	condense
Input:
    Design right - the Design object to be condensed
Goal: 
	Reduce the size of all the members of the Design object,
    littles to be within 7
    lots to be within 23
    anything else goes to heaps
    will try to break down heaps if the lots or littles are negatives,
    if heaps are negative it will not break them down.
Returns:
	void none, updates the Design object attached
*/
void Design::condense(Design &input){
    if (input.little >= 7) {
        input.lot += input.little / 7;
        input.little %= 7;
    }
    if (input.lot >= 23) {
        input.heap += input.lot / 23;
        input.lot %= 23;
    }
    while (input.little < 0) {
        if (input.lot > 0){
            input.lot -= 1;
            input.little += 7;
        }
        else {
            break;
        }
    }
    while (input.lot < 0) {
        if (input.heap > 0){
            input.heap -= 1;
            input.lot += 23;
        }
        else {
            break;
        }
    }
}

/*
Function: 
	distBetween
Input:
    Design x - Design object to be compared
    Design y - Design object to be compared
Goal: 
	Find the distance between x and y as an absolute value
Returns:
	double - (absolute value of x - y as meters)
*/
double Design::distBetween(Design x, Design y){
    return abs(x.meters(x) - y.meters(y));
}

/*
Function: 
	meters
Input:
    Design input - Design object
Goal: 
	Find the value of Design if turned into meters,
    assuming 1 meter = 2 heaps or 46 lots, or 322 littles
Returns:
	double -  the amount of meters that the given Design object equals
*/
double Design::meters(Design input) {
    //assuming one meter is, say, 2 heaps/46 lots/322 littles
    double meter;
    meter = static_cast<double>(input.heap) / 2;
    meter += static_cast<double>(input.lot) / 46;
    meter += static_cast<double>(input.little) / 322;
    return meter;
}
