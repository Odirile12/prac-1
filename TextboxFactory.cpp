#include "TextboxFactory.h"
#include "Textbox.h"
#include <string>
#include <iostream>


Shape* TextboxFactory::createTextbox(int length, int width, std::string color, int position_x, int position_y, std::string text) {
    newTextbox = new TheShape(length, width, color, position_x, position_y, text);
    std::cout << "Creating Textbox" << std::endl;
    // Create a new Textbox object with the provided parameters
    return new Textbox(length, width, color, position_x, position_y, text);
}
void TextboxFactory::toString() {
    std::cout << "TextboxFactory" << std::endl;
    
    std::cout << "Length: " << newTextbox->getLength() << ", Width: " << newTextbox->getWidth()
              << ", Color: " << newTextbox->getColor() 
              << ", Position: (" << newTextbox->getPositionX() << ", " << newTextbox->getPositionY() << ")"
              << ", Text: " << newTextbox->getText() 
              << std::endl;
}