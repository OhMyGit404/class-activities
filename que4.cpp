#include <iostream>
using namespace std;
int main() {

    const int total = 580367;
    double counties = 47;
    double each_county = total/counties;
    int mtrs = total*1000000;//(1 km^2 = 1,000,000 m^2)

    cout<<"Each county will have "<<each_county<< " km2.\n";


    cout<<"Each county will have "<<mtrs<< " m2.";

    return 0;
}