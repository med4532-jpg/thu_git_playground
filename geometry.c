#include "geometry.h"
#include <math.h>

double circle_circumference(double radius) {
    return 2 * M_PI * radius;
}

double circle_area(double radius) {
    return M_PI * radius * radius;
}