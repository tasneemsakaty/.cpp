#include <iostream>
using namespace std;
int main() {
    int n,x,b,z,y;
    float AVG_o,AVG_e;
    z=0;
    y=0;
    b=0;
    //b  counter odd numbers
    //z is sum odd 
    //y is sum even
    // x counter all numbers
    while(x<10){
        cout<<"Plz enter a number : ";
        cin>>n;
        if(n%2==0){
            y=y+n;
            b++;
        }
        else{
            z=z+n;
        }
        x++;
    }
    AVG_e=y/(10-b);
    AVG_o=z/b;
    cout<<"Average of odd numbers that you entered ="<<AVG_o<<"";
    cout<<"\n";
    cout<<"Average of even numbers that you entered = "<<AVG_e<<"";
    return 0;
}