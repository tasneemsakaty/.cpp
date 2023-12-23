#include <iostream>
using namespace std;
int main() {
    int n1;
    //n1 = number of days in this trips
    cout <<"How long is this trip in days? ";
    cin>>n1;
    cout <<"the trip is "<<n1/7<<" weeks and "<<n1%7<<" days";
    return 0;
}