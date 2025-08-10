#ifndef TEXTBOXFACTORY_H
#define TEXTBOXFACTORY_H

#include "ShapeFactory.h"
#include "shapeproperty.h"

class TextboxFactory: public ShapeFactory {
    private:
        TheShape* newTextbox;
    public:

        Shape* createTextbox(int length, int width, std::string color, int position_x, int position_y,std::string="") override;
        void toString() override;

};

#endif // TEXTBOXFACTORY_H