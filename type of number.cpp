#include<iostream>
using namespace std;
int main(){
    int n,x;
    // x is times
    while(x<10){
        cout<<"Plz enter a number : ";
        cin>>n;
        if(n>0){
            cout<<""<<n<<" is a positive number.";
        }
        else if(n<0){
            cout<<""<<n<<" is a negative number.";
        }
        else{
            cout<<"zero is a neutral number.";
        }
        cout<<"\n";
        x++;
    }
    return 0;
}