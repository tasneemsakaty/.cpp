#include <iostream>
using namespace std;
int main(){
    int n,k,factorial;
    cout<<"Plz enter a number : ";
    cin>>n;
    factorial=1;
    for(int k=n;k>0;k--)
    factorial=factorial*k;
    cout<<"factorial="<<factorial<<"";
    }