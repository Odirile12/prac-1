#ifndef SQUAREFACTORY_H
#define SQUAREFACTORY_H
#include "ShapeFactory.h"
#include "shapeproperty.h"
// #include "Shape.h"

class SquareFactory: public ShapeFactory {
    private:
        TheShape* newSquare; // Assuming TheShape is a class that holds the properties of the shape



    public:
        Shape* createShape(int length, int width, std::string color, int position_x, int position_y)override;
        void toString() override;
};
#endif