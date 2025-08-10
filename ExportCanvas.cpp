#include "ExportCanvas.h"


ExportCanvas::ExportCanvas(Canvas* canvas) 
    : canvas(canvas) {

};

void ExportCanvas::prepareCanvas() {

    std::cout << "Preparing canvas for export..." << std::endl;
};

void ExportCanvas::renderElements() {
    std::cout << "Rendering elements on the canvas..." << std::endl;
}
void ExportCanvas::saveToFile(){
    return;
}

void ExportCanvas::exportFile() {
    prepareCanvas();
    renderElements();
    saveToFile();
};