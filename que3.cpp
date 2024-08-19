#include <iostream>
using namespace std;
int main() {

    const double total = 580367;
    double counties = 47;
    double each_county = total/counties;

    cout<<"Each county will have "<<each_county<< " km2.";


    
    return 0;
}