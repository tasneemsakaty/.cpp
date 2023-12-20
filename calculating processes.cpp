#include <iostream>
using namespace std;
int main() {
    float a,b,Result;
    char Symbol;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "Symbol of the process is ";
    cin >> Symbol;
    switch (Symbol){
    case'+' :
        Result=a+b;
        cout<<""<<a<<"+"<<b<<"="<<Result<<" \n"; break;
    case'-' :
        Result=a-b;
        cout<<""<<a<<"-"<<b<<"="<<Result<<" \n"; break;
    case'*' :
        Result=a*b;
        cout<<""<<a<<"*"<<b<<"="<<Result<<" \n"; break;   
    case'/' :
        if (b!=0){
        Result=a/b;
        cout<<""<<a<<"/"<<b<<"="<<Result<<" \n"; break;
        }
        else 
        cout <<"Division by zero is undefined.\n"; break;
    default :
        cout << "Invalid operator.\n";
    }
    return 0;
}