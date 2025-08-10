#ifndef EXPORTCANVAS_H
#define EXPORTCANVAS_H

#include <iostream>

class Canvas;

// #include "Canvas.h"

class ExportCanvas {
    private:
        Canvas* canvas;
        void prepareCanvas();
        void renderElements();
        virtual void saveToFile()= 0;

    public:
        ExportCanvas(Canvas* canvas);
        void exportFile();
        virtual ~ExportCanvas() = default;

};


#endif