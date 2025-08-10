#include "Textbox.h"

Textbox::Textbox(int length , int width , std::string color , int position_x, int position_y, std::string text ):length(length), width(width), color(color), position_x(position_x), position_y(position_y), text(text) {

}
Textbox::~Textbox() {
}
Shape* Textbox::clone() {
    Textbox* textboxClone = new Textbox();
    textboxClone->length = this->length;
    textboxClone->width = this->width;
    textboxClone->color = this->color;
    textboxClone->position_x = this->position_x;
    textboxClone->position_y = this->position_y;
    textboxClone->text = this->text;
    return textboxClone;    
}
