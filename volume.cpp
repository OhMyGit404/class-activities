#include <iostream>
using namespace std;
int main() {

    double radius;
    double height;

    cout << "Input the radius of the cylinder ";
    cin >> radius;
    cout << "Input the height of the cylinder ";
    cin >> height;

    const double pi=3.142;
    double volume = pi*radius*radius*height;

    cout << "The volume of the cylinder is "<< volume << "\n";


    return 0;
}