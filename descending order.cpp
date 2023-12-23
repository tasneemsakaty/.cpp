#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"the first num = ";
    cin>>a;
    cout<<"the second num = ";
    cin>>b;
    if (a<b)
    {
    cout<<"the first num  is less than the second num ";
    }
    else if (a>b)
    {
    cout<<"the first num is greater than the second num";
    }
    else 
    {
    cout<<"a is equal b";
    }
    return 0;
}