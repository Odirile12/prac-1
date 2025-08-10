#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(int length, int width, std::string color , int position_x , int position_y):length(length), width(width), color(color), position_x(position_x), position_y(position_y) {

}
Rectangle::~Rectangle() {
}
void Rectangle::print() {
    std::cout << "Rectangle: Length = " << length << ", Width = " << width 
              << ", Color = " << color
                << ", Position = (" << position_x << ", " << position_y << ")";
}


Shape* Rectangle::clone() {
    
    Rectangle* rectangleClone = new Rectangle();
    rectangleClone->length = this->length;
    rectangleClone->width = this->width;
    rectangleClone->color = this->color;
    rectangleClone->position_x = this->position_x;
    rectangleClone->position_y = this->position_y;
    
    return rectangleClone;
}