#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H
#include "Shape.h"

class ShapeFactory {

    

    protected:
    // remember to remove public
        
        virtual Shape* createShape(int length, int width, std::string color, int position_x, int position_y);
        virtual Shape* createTextbox(int length, int width, std::string color, int position_x, int position_y,std::string="");
        virtual void toString()=0;

};

#endif // SHAPEFACTORY_H