#ifndef CANVAS_H
#define CANVAS_H

#include "Shape.h"
#include "Memento.h"
class Memento;

class Canvas{
    private:
        Shape* shape;
    public:
        Canvas(Shape* shape) : shape(shape) {}

        Memento* captureCurrent();

        void undoAction(Memento* prev);

};

#endif