#include "Design.h"
#include <iostream>
#include <string>

Design Design::operator+(Design right){
    Design tempDesign;
    tempDesign.little = little + right.little;
    tempDesign.lot = lot + right.lot;
    tempDesign.heap = heap + right.heap;

    //condense(tempDesign);
    return tempDesign;
}

Design Design::operator-(Design right){
    Design tempDesign;
    tempDesign.little = little - right.little;
    tempDesign.lot = lot - right.lot;
    tempDesign.heap = heap - right.heap;

    //condense(tempDesign);
    return tempDesign;
}
Design Design::operator*(Design right) {
    Design tempDesign;
    tempDesign.little = little * right.little;
    tempDesign.lot = lot * right.lot;
    tempDesign.heap = heap * right.heap;

    //condense(tempDesign);
    return tempDesign;
}

Design Design::operator/(Design right) {
    Design tempDesign;
    tempDesign.little = little / right.little;
    tempDesign.lot = lot / right.lot;
    tempDesign.heap = heap / right.heap;

    //condense(tempDesign);
    return tempDesign;
}

bool Design::operator==(Design right) {
    if ((little == right.little) && (lot == right.lot) && (heap == right.heap)){
        return true;
    } else {
        return false;
    }
}

//needs to be a funtion in design.h because then we can consider
//right as an int rather than Design
std::string Design::operator<<(Design right) {
    return toString(right);
}

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
