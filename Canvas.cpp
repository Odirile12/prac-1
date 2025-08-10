#include "Canvas.h"

Memento* Canvas::captureCurrent() {
    return new Memento(this->shape);
}

void Canvas::undoAction(Memento* prev) {
    if (prev) {
        this->shape = prev->shape->clone(); 
    }
}


