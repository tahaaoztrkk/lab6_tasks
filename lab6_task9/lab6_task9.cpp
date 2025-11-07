#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double getRadius() {
        return radius;
    }
};

void printCircleInfo(Circle c) {
    double PI = 3.14;
    double area = PI * c.getRadius() * c.getRadius();
    cout << "Radius: " << c.getRadius() << ", Area: " << area << endl;
}

int main() {
    Circle c(5.0);
    printCircleInfo(c);
    return 0;
}