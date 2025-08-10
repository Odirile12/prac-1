#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
class Rectangle: public Shape {
    private:
        int length;
        int width;
        std::string color;
        int position_x;
        int position_y;
    public:
        Rectangle(int length = 0, int width = 0, std::string color = "", int position_x = 0, int position_y = 0);
        ~Rectangle();
        void print() override;
        Shape* clone() override;

};

#endif