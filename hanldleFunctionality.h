#ifndef HANDLEFUNCTIONALITY_H
#define HANDLEFUNCTIONALITY_H

#include "Memento.h"
#include "CareTaker.h"
#include "Canvas.h"
#include <vector>

class HandleFunctionality {
    private:
        CareTaker* careTaker;
        std::vector<Canvas> canvas;
    public:
        HandleFunctionality(CareTaker* careTaker) : careTaker(careTaker) {}
        void addCanvas(Canvas* newCanvas);
        
};

#endif