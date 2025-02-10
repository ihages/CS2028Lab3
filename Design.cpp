#include "Design.h"
#include <iostream>
#include <string>
#include <cmath>

void Design::operator+(const Design &right){
    this->little += right.little;
    this->lot += right.lot;
    this->heap += right.heap;
    (*this).condense(*this);
}

void Design::operator-(const Design &right){
    this->little -= right.little;
    this->lot -= right.lot;
    this->heap -= right.heap;
    (*this).condense(*this);
}
void Design::operator*(const Design &right) {
    this->little *= right.little;
    this->lot *= right.lot;
    this->heap *= right.heap;
    (*this).condense(*this);
}

void Design::operator/(const Design &right) {
    this->little /= right.little;
    this->lot /= right.lot;
    this->heap /= right.heap;
    (*this).condense(*this);
}

bool Design::operator==(const Design &right) {
    if ((little == right.little) && (lot == right.lot) && (heap == right.heap)){
        return true;
    } else {
        return false;
    }
}

//got help from:
//https://stackoverflow.com/questions/476272/how-can-i-properly-overload-the-operator-for-an-ostream
std::ostream& operator<<(std::ostream& stream, const Design &right){
    stream << "Little: " << right.little << "\n";
    stream << "Lot: " << right.lot << "\n";
    stream << "Heap: " << right.heap;
    return stream;
}

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

double Design::distBetween(Design x, Design y){
    return abs(x.meters(x) - y.meters(y));
}

double Design::meters(Design input) {
    //assuming one meter is, say, 2 heaps/46 lots/322 littles
    double meter;
    meter = static_cast<double>(input.heap) / 2;
    meter += static_cast<double>(input.lot) / 46;
    meter += static_cast<double>(input.little) / 322;
    return meter;
}
