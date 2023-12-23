#include <iostream>
using namespace std;
int main() 
{ 
    int a, b, c, k, n; 
    cout << "Please enter value of n: "; 
    cin >>n; 
    a = 1; 
    b = 1; 
    cout << a << "\t" << b << "\t"; 
    for (k = 2; k < n; k++) 
    { 
    c = a + b; 
    a = b; 
    b = c; 
    cout << c << "\t";
    } 
    return 0; 
}