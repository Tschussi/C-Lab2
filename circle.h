class circle
{
public:
    double radius(); // returns the radius of the circle
    double circumference(); // returns the circumference of the circle
    double area() ; // returns the area of the circle
    void populate_classobj(double px1, double py1, double px2, double py2); // declares the variables for other functions
protected:
    double distance(); // returns the radius for use in class functions
private: // variables for use in class functions
    double x;
    double x2;
    double y;
    double y2;
    double rad;
};
