#include <iostream>
using namespace std;
#include "Square.h"
#include "Rectangle.h"
#include "Textbox.h"
#include "ShapeFactory.h"
#include "RectangleFactory.h"
#include "TextboxFactory.h"
#include "SquareFactory.h"
#include "CareTaker.h"
#include "Canvas.h"

int main(){
    RectangleFactory rectangleFactory;
    TextboxFactory textboxFactory;
    SquareFactory squareFactory;


    Shape* rectangle = rectangleFactory.createShape(4, 2, "red", 0, 0);
    rectangleFactory.toString();
    Shape* textbox = textboxFactory.createTextbox(4, 2, "green", 1, 1,"helloworld");
    textboxFactory.toString();
    Shape* square = squareFactory.createShape(5, 7, "blue", 1, 6);
    squareFactory.toString();

    Canvas* canvas = new Canvas(rectangle);
    Canvas* canvas2 = new Canvas(textbox);
    Canvas* canvas3 = new Canvas(square);
    CareTaker* careTaker = new CareTaker();

    
    Memento* memento = canvas->captureCurrent();
    Memento* memento2 = canvas2->captureCurrent();
    Memento* memento3 = canvas3->captureCurrent();

    careTaker->addMemento(memento);
    careTaker->addMemento(memento2);
    careTaker->addMemento(memento3);

    std::cout<< std::endl;
    std::cout<<"checking sorage"<< std::endl;
    careTaker->checkStorage();
    std::cout<<"done checking "<< std::endl;
    std::cout<< std::endl;


    
    
    canvas->undoAction(careTaker->popMemento());
    canvas->undoAction(careTaker->popMemento());
    
    std::cout<< std::endl;

    std::cout<<"checking sorage"<< std::endl;
    careTaker->checkStorage();
    std::cout<<"done checking "<< std::endl;

    std::cout<< std::endl;

    careTaker->redoAction();

    std::cout<< std::endl;


    std::cout<<"checking sorage"<< std::endl;
    careTaker->checkStorage();
    std::cout<<"done checking "<< std::endl;



    
    return 0;


}