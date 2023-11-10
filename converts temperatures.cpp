#include <iostream>
using namespace std;
int main() {
    int Tcelsius;
    int Tfahrenheit;
    int Tkelvin;
    cout <<"Tcelsius= ";
    cin>>Tcelsius;
    Tfahrenheit=((9/5)*Tcelsius)+32;
    cout <<"Tfahrenheit= "<<Tfahrenheit <<endl;
    Tkelvin=Tcelsius+273;
    cout <<"Tkelvin= "<<Tkelvin;
    return 0;
}