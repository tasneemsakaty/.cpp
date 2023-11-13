//TO prove a=b is different than b=a
#include <iostream>
using namespace std;
int main() {
    int a;
    int b;
    a=5;
    b=7;
    cout <<"original value of a = "<< a << endl;
    cout <<"original value of b = "<< b << endl;
    a=b;
    cout <<"last value of a = "<< a << endl;
    cout <<"last value of b = "<< b << endl;
    return 0;
}