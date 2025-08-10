#include "RectangleFactory.h"
#include "Rectangle.h"
#include <iostream>

#include "Rectangle.h"




Shape* RectangleFactory::createShape(int length, int width, std::string color, int position_x, int position_y) {
    newRectangle = new TheShape(length, width, color, position_x, position_y);
    std::cout<<"Creating Rectangle "<<std::endl;
    return new Rectangle(length, width, color, position_x, position_y);
}
void RectangleFactory::toString() {
    std::cout << "RectangleFactory" << std::endl;
    
    std::cout << "Length: " << newRectangle->getLength() << ", Width: " << newRectangle->getWidth()
              << ", Color: " << newRectangle->getColor() 
              << ", Position: (" << newRectangle->getPositionX() << ", " << newRectangle->getPositionY() << ")" 
              << std::endl;


 


}