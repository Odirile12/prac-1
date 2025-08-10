#include <iostream>
using namespace std;
#include "Square.h"
#include "Rectangle.h"
#include "Textbox.h"
#include "ShapeFactory.h"
#include "RectangleFactory.h"
#include "TextboxFactory.h"
#include "SquareFactory.h"

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

    
    return 0;


}