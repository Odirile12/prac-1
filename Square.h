#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

class Square : public Shape {
    private:
        int length;
        int width;
        std::string color;
        int position_x;
        int position_y;
    public:
        Square(int length = 0, int width = 0, std::string color = "", int position_x = 0, int position_y = 0);
        ~Square();
        Shape* clone() override;



        
};
#endif

