#ifndef RECTACLEFACTORY_H
#define RECTACLEFACTORY_H

#include "ShapeFactory.h"
#include "Rectangle.h"
#include "shapeproperty.h"


class RectangleFactory: public ShapeFactory {
    private:
    TheShape* newRectangle; // Assuming TheShape is a class that holds the properties of the shape
    public:

    
    Shape* createShape(int length, int width, std::string color, int position_x, int position_y) override;
    void toString(

    ) override;
    
};


#endif // RECTACLEFACTORY_H