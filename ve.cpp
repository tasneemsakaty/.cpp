#include<iostream>
using namespace std;
int main(){
    int n,sum;
    sum=0;
    while(n>=0){
    cout<<"Plz enter number : ";
    cin>>n;
    if(n>0)
    sum=sum+n;
    cout<<"\n";
    }
    cout<<"sum of the positive numbers that you entered ="<<sum<<"";
    return 0;
    }