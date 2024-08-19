#include <iostream>
using namespace std;
int main() {
    double num1;
    double num2;
    double num3;

    cout<<"Input num1 ";
    cin>>num1;
    cout<<"Input num2 ";
    cin>>num2;

    num3=num1;
    num1=num2;
    num2=num3;

    cout<<"Your num1 is "<<num1<<" and num2 is "<<num2;

    return 0;
}
