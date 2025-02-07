#include "Design.h"
#include <iostream>
#include <string>

void Design::operator+(Design right){
    this->little += right.little;
    this->lot += right.lot;
    this->heap += right.heap;
}

void Design::operator-(Design right){
    this->little -= right.little;
    this->lot -= right.lot;
    this->heap -= right.heap;
}
void Design::operator*(Design right) {
    this->little *= right.little;
    this->lot *= right.lot;
    this->heap *= right.heap;
}

void Design::operator/(Design right) {
    this->little /= right.little;
    this->lot /= right.lot;
    this->heap /= right.heap;
}

bool Design::operator==(Design right) {
    if ((little == right.little) && (lot == right.lot) && (heap == right.heap)){
        return true;
    } else {
        return false;
    }
}
/*
std::string Design::operator<<(Design right) {
    if (little == right.little) {
        return std::to_string(little);
    }
    else if (lot == right.lot) {
        return std::to_string(lot);
    }
    else if (heap == right.heap) {
        return std::to_string(heap);
    }
    return ("");
}
*/

Design Design::condense(Design &input){
    if (input.little >= 7) {
        input.lot += input.little / 7;
        input.little /= 7;
    }
    if (input.lot >= 23) {
        input.heap += input.lot / 23;
        input.lot /= 23;
    }
    if (input.little < 0) {
        input.lot -= 1;
        input.little += 7;
    }
    if (input.lot < 0) {
        input.heap -= 1;
        input.lot += 23;
    }
    return input;
}

int Design::distBetween(Design x, Design y){
    int littleDistance = 1;
    int lotDistance = 7;
    int heapDistance = 161;
    
}