#include <iostream>
using namespace std;

int main() {

    double total_land = 20;
    int sons = 6;
    double each_son = total_land / sons;

    cout << "Each son will get " << each_son << "ha"  << " when the "<<total_land<< "ha land is divided "<<"into 6 for each son";

    return 0;
}
