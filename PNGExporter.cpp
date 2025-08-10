
#include "PNGExporter.h"
#include <iostream>

PNGExporter::PNGExporter(Canvas* canvas): ExportCanvas(canvas) {

};
void PNGExporter::saveToFile() {
    std::cout << "Saving canvas as PNG file..." << std::endl;
}