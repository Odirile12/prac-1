#ifndef MEMENTO_H
#define MEMENTO_H

#include "Canvas.h"

class Memento{
    friend class Canvas; // Allow Canvas to access private members
    private:
        Shape* shape;
    public:
        Memento(Shape* element);
        Shape* getShape() const;


};

#endif