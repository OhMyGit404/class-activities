#include <iostream>

using namespace std;

int main(){

    double celsius;
    cout<<"Enter temperature in celsius: ";
    cin>>celsius;
    double fahrenheit = (celsius*1.8)+32;
    cout<<"The temperature in fahrenheit is: "<<fahrenheit<<" 🥶F";
    return 0;
}
