

#ifndef SHAPEPROPERTY_H
#define SHAPEPROPERTY_H

#include <string>
class TheShape{
    private:
        int length;
        int width;
        std::string color;
        int position_x;
        int position_y;
        std::string text= "";
    
    public:
        
        TheShape(int length, int width = 0, std::string color = "", int position_x = 0, int position_y = 0, std::string text = "")
        : length(length), width(width), color(color), position_x(position_x), position_y(position_y), text(text) {}
        int getLength() const { return length; }
        int getWidth() const { return width; }
        std::string getColor() const { return color; }      
        int getPositionX() const { return position_x; }
        int getPositionY() const { return position_y; }
        std::string getText() const { return text; }
    

};

#endif // SHAPEPROPERTY_H