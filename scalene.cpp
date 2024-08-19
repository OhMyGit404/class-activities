#include <iostream>
using namespace std;
int main() {

    double base;
    double height;

    cout << "Input the base of the triangle ";
    cin >> base;
    cout << "Input the height of the triangle ";
    cin >> height;

    double area = 0.5*base*height;

    cout << "The area of the triangle is "<< area << "\n";


    return 0;
}