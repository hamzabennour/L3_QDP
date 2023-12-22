#include "elements.h"


elements::elements(int x, int y):d_x{x},d_y{y}
{}

void elements::setX(int x) {
    d_x =x;
}

void elements::setY(int y) {
    d_y =y;
}
int elements::x() const {
    return d_x;
}

int elements::y() const {
    return d_y;
}

