#include<iostream>
using namespace std;

int main() {
    int n,flag=0;
    cout<<"Plz enter num : ";
    cin>>n;
    for(int i=2;i<=n/2;i++){
        if(n%i==0) {flag=1;break;}
    }
    if(flag==1){
        cout<<"The number is not primer .";
    }
    else{
        cout<<"The number is primer .";
    }
    return 0;
    }
