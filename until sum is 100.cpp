#include <iostream>
using namespace std;
int main(){
    int n, sum;
    sum=0;
    while(sum<100){
        cout<<"Plz enter a num : ";
        cin>>n;
        sum=sum+n;
    }
    cout<<"sum="<<sum<<"";
    return 0;
}