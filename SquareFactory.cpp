#include "SquareFactory.h"
#include "Square.h"
#include <iostream>

Shape* SquareFactory::createShape(int length, int width, std::string color, int position_x, int position_y) {
    // Create a new Square object with the provided parameters
    newSquare = new TheShape(length, width, color, position_x, position_y);
    std::cout << "Creating Square"<< std::endl;
    return new Square(length, width, color, position_x, position_y);
}

void SquareFactory::toString() {
    // Implementation of toString method
    std::cout << "SquareFactory" << std::endl;
    // You can also print the properties of the newSquare if needed
    std::cout << "Length: " << newSquare->getLength() << ", Width: " << newSquare->getWidth()
              << ", Color: " << newSquare->getColor() 
              << ", Position: (" << newSquare->getPositionX() << ", " << newSquare->getPositionY() << ")" 
              << std::endl;
              
    
}
