#ifndef SHAPE_H
#define SHAPE_H
#include <string>

class Shape {
    private:
    int length;
    int width;
    std::string color;
    int position_x;
    int position_y;
    public:
    // Shape():length(length), width(width), color(color), position_x(position_x), position_y(position_y) {};
    virtual Shape* clone()=0;
    virtual void print()=0;


};

#endif