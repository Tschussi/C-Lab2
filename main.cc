// Kevin Hames00
// Ece 2602 27/9/15

#include <iostream>
#include "circle.h"

int main()
{
    // creating variables and circle object
    double px1;
    double px2;
    double py1;
    double py2;
    int menu;
    std::cout << "Please enter the cordinates of the circle's center (x followed by y)" << std::endl;
    std::cin >> px1;
    std::cin >> py1;
    std::cout << "Please enter the cordinates of a point on the circle (x followed by y)" << std::endl;
    std::cin >> px2;
    std::cin >> py2;
    circle mycircle;
    mycircle.populate_classobj(px1, py1, px2, py2);
    // menu option, allowing a user to select which function to call and calculates values of a user defined circle
    std:: cout << "(1) Compute Radius" << std::endl << "(2) Compute Circumference" << std::endl << "(3) Compute Area" << std::endl << "(4) Exit" << std::endl;
    while(menu != 4) {
    std::cin >> menu;
    switch (menu) {
        case 1 :
            std::cout << "The Radius is " << mycircle.radius() << std::endl;
            break;
        case 2 :
            std::cout << "The Circumference is " << mycircle.circumference() << std::endl;
            break;
        case 3 :
            std::cout << "The Area is " << mycircle.area() << std::endl;
            break;
        case 4:
            break;
        default:
            std::cout << "Invalid option " << std::endl;
    }
    }
    return 0;
}

