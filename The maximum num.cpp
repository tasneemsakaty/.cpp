#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout <<"The first num is ";
    cin>>a;
    cout <<"The second num is ";
    cin>>b;
    cout <<"The third num is ";
    cin>>c;    
    if ((a>b)&&(a>c)){
        cout<<"The maximum num is "<<a<<" ";
    }
    else if ((b>a)&&(b>c)){
        cout<<"The maximum num is "<<b<<" ";
    }
    else
        cout<<"The maximum num is "<<c<<" ";
    return 0;
}