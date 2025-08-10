
#include "PDFExporter.h"
#include <iostream>
PDFExporter::PDFExporter(Canvas* canvas) : ExportCanvas(canvas) {
    
};
void PDFExporter::saveToFile() {
    std::cout << "Saving canvas as PDF file..." << std::endl;
};