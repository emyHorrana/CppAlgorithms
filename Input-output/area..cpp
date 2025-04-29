#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;
    const double pi = 3.14159;

    cin >> a >> b >> c;

    double area_triangle = (a * c) / 2;
    double area_circle = pi * c * c;
    double area_trapezoid = ((a + b) * c) / 2;
    double area_square = b * b;
    double area_rectangle = a * b;

    cout << fixed << setprecision(3);
    cout << "CIRCLE: " << area_circle << endl;
    cout << "TRAPEZOID: " << area_trapezoid << endl;
    cout << "SQUARE: " << area_square << endl;
    cout << "RECTANGLE: " << area_rectangle << endl;

    return 0;
}
