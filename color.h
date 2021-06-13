#ifndef RENDER_COLOR_H
#define RENDER_COLOR_H

#include "vec3.h"
#include <iostream>

void write_color(std::ostream &out,color pixel_color) {
    out<<static_cast<int>(255.999 * pixel_color.x()) << ' '
        <<static_cast<int>(255.999 * pixel_color.y()) << ' '
        <<static_cast<int>(255.999 * pixel_color.z()) << '\n';
}

#endif //RENDER_COLOR_H
