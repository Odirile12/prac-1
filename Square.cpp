#include "Square.h"
#include <iostream>
//Remember that your Square dose not have equal length and width
Square::Square(int length, int width , std::string color , int position_x, int position_y ):length(length), width(width), color(color), position_x(position_x), position_y(position_y) {
    if(this->length != this->width) {
        std::cout << "Warning: Square created with unequal length and width." << std::endl;
    }
    

    

}
Square::~Square() {
}
Shape* Square::clone() {
    Square* squareClone = new Square();
    squareClone->length = this->length;
    squareClone->width = this->width;
    squareClone->color = this->color;
    squareClone->position_x = this->position_x;
    squareClone->position_y = this->position_y;
    return squareClone;
}