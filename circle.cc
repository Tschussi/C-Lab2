
#include "circle.h"
#include <cmath>  
#define PI (4*(atan(1)))

double circle::distance() {
    return  sqrt(pow(x-x2,2) + pow(y-y2,2));
}
double circle::radius() {
 return circle::distance();
}
double circle::circumference() {
    return 2*PI*circle::radius();
}
double circle::area() {
    return PI * pow(circle::radius(),2);
}
void circle::populate_classobj(double px1, double py1, double px2, double py2) {
    x = px1;
    x2 = px2;
    y = py1;
    y2 = py2;
}