#include <iostream>
using namespace std;
int main() {
    double bprice;
    double sprice;

    cout<<"Input the buying price ";
    cin>>bprice;
    cout<<"Input the selling price ";
    cin>>sprice;


    double profit = sprice - bprice;

    cout<<"Your profit is: "<<profit<<"Ksh\n";

    double percentage_profit1 = sprice-bprice;
    double percentage_profit2 = percentage_profit1/bprice;
    double percentage_profit3 = percentage_profit2*100;

    cout<<"Your percentage profit is "<<percentage_profit3<< "%";




    return 0;
}
