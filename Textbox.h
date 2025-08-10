#ifndef TeXTBOX_H
#define TeXTBOX_H

#include <string>
#include "Shape.h"
class Textbox :public Shape {
    private:
        int length;
        int width;
        std::string color;
        int position_x;
        int position_y;
        std::string text;
    public:
        Textbox(int length = 0, int width = 0, std::string color = "", int position_x = 0, int position_y = 0, std::string text = "");
        ~Textbox();
        Shape* clone() override;
};

#endif