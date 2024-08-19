#include <iostream>
using namespace std;
int main() {

    const double PI = 3.142;
    double radius;

    cout << "Enter radius ";
    cin >> radius;

    double diameter = radius+radius;
    double area = PI*radius*radius;

    cout << "The area is "<< area << "\n";
    cout << "The diameter is "<< diameter;


    return 0;
}
