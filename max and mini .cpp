#include<iostream>
using namespace std;
int main(){
    int n,max,mini;
    for(int x=1;x<=10;x++){
        cout<<"Plz enter num "<<x<<" of 10 : ";
        cin>>n;
        if(n>max) max=n;
        if(n<mini) mini=n;  
        }
    cout<<"maximum of numbers = "<<max<<"\n";
    cout<<"minimum of numbers = "<<mini<<"\n"; 
    return 0;
}