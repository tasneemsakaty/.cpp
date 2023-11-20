#include <iostream>
using namespace std;
int main() {
    int h;
    int m;
    int s;
    int ms;
    cout <<"h=";
    cin>>h;
    cout <<"m=";
    cin>>m;
    cout <<"s=";
    cin>>s;
    ms=(3600000*h)+(60000*m)+(1000*ms);
    cout<<"ms="<<ms;
    return 0;
}
