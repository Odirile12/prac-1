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

    virtual Shape* clone()=0;


};

#endif