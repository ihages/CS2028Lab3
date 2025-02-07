#include "Design.h"
#include <iostream>
#include <string>

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
/*
std::string Design::operator<<(Design right) {
    return toString(right);
}
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

int Design::distBetween(Design x, Design y){
    int littleDistance = 1;
    int lotDistance = 7;
    int heapDistance = 161;
    return -1;
}
