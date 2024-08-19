#include <iostream>
using namespace std;
int main() {

    double side;

    cout << "Input the length of the side of the cube ";
    cin >> side;

    double volume = side*side*side;

    cout << "The volume of the cube is "<< volume << "\n";

    return 0;
}