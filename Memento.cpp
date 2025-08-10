#include "Canvas.h"
#include "Memento.h"
#include "CareTaker.h"

Memento::Memento(Shape* element) : shape(element->clone()) {
    
}
Shape* Memento::getShape() const {
    return shape;
}

    