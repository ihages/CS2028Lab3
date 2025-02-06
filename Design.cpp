#include "design.h"
#include <iostream>
#include <string>

Design Design::operator+(Design right){
    int tempLittle = little + right.little;
    int tempLot = lot + right.lot;
    int tempHeap = heap + right.heap;

    if (tempLittle >= 7) {
        tempLot += tempLittle / 7;
        tempLittle /= 7;
    }
    if (tempLot >= 23) {
        tempHeap += tempLot / 23;
        tempLot /= 23;
    }
    return(tempLittle,tempLot,tempHeap);
}

Design Design::operator-(Design right){
    int tempLittle = little - right.little;
    int tempLot = lot - right.lot;
    int tempHeap = heap - right.heap;

    if (tempLittle < 0) {
        tempLot -= 1;
        tempLittle += 7;
    }
    if (tempLot < 0) {
        tempHeap -= 1;
        tempLot += 23;
    }
    if (tempHeap < 0) {
        exit(1);
    }
    return(tempLittle,tempLot,tempHeap);
}
Design Design::operator*(Design right) {
    int tempLittle = little * right.little;
    int tempLot = lot * right.lot;
    int tempHeap = heap * right.heap;

    if (tempLittle >= 7) {
        tempLot += tempLittle / 7;
        tempLittle /= 7;
    }
    if (tempLot >= 23) {
        tempHeap += tempLot / 23;
        tempLot /= 23;
    }
    return(tempLittle,tempLot,tempHeap);
}

Design Design::operator/(Design right) {
    int tempLittle = little / right.little;
    int tempLot = lot / right.lot;
    int tempHeap = heap / right.heap;

    if (tempLittle >= 7) {
        tempLot += tempLittle / 7;
        tempLittle /= 7;
    }
    if (tempLot >= 23) {
        tempHeap += tempLot / 23;
        tempLot /= 23;
    }
    return(tempLittle, tempLot, tempHeap);
}

bool Design::operator==(Design right) {
    if ((little == right.little) && (lot == right.lot) && (heap == right.heap)){
        return true;
    } else {
        return false;
    }
}

std::string Design::operator<<(Design right) {
    if (little = right.little) {
        return std::to_string(little);
    }
    else if (lot = right.lot) {
        return std::to_string(lot);
    }
    else if (heap = right.heap) {
        return std::to_string(heap);
    }
}