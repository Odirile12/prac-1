#include "CareTaker.h"
#include "Memento.h"
#include <iostream>

void CareTaker::addMemento(Memento* memento){
    
    if (memento == nullptr) {
        std::cout << "Cannot add a null memento." << std::endl;
        return;
    }
    std::cout << "Adding ";
    memento->getShape()->print();
    std::cout <<" to CareTaker." << std::endl;
    this->mementos.push_back(memento);
}

Memento* CareTaker::popMemento(){
    if (mementos.empty()) {
        std::cout <<"No mementos to pop." << std::endl;
        return nullptr;
    } else {
        Memento* lastMemento = mementos.back();
        std::cout << "Removing ";
        lastMemento->getShape()->print();
        std::cout << " from CareTaker." << std::endl;
        currentMemento = lastMemento;
        mementos.pop_back();
        return lastMemento;
    }
    
}
void CareTaker::redoAction() {
    if (currentMemento == nullptr) {
        std::cout << "Cannot redo a null memento." << std::endl;
        return;
    }
    std::cout << "Redoing action for ";
    currentMemento->getShape()->print();
    std::cout << std::endl;
    this->mementos.push_back(currentMemento);
}

void CareTaker::checkStorage() const {
    if (mementos.empty()) {
        std::cout << "No mementos stored." << std::endl;
    } else {
        std::cout << "Stored Mementos:"<<mementos.size()<< std::endl;
        for (const auto& memento : mementos) {
            memento->getShape()->print();
            std::cout << std::endl;
        }
    }
}