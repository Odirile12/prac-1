#ifndef CARETAKER_H
#define CARETAKER_H
#include <vector>
#include "Memento.h"
#include <iostream>

class CareTaker {
    private: 
        std::vector<Memento*> mementos;
        Memento* currentMemento;
    public:
        CareTaker() = default;
        ~CareTaker();
        void addMemento(Memento* memento);
        Memento* popMemento();
        void checkStorage() const;
        void redoAction();

        
};


#endif