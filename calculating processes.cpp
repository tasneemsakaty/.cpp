#include <iostream>
using namespace std;
int main() {
    float a;
    float b;
    float Addition;
    float Subtraction;
    float Multiplication;
    float Division;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    Addition = a + b;
    cout << "Addition = " << Addition << endl;
    Subtraction = a - b;
    cout << "Subtraction = " << Subtraction << endl;
    Multiplication = a * b;
    cout << "Multiplication = " << Multiplication << endl;
    Division = a / b;
    cout << "Division = " << Division;
    return 0;
}