#include <iostream>
using namespace std;
int main(){
    char ch;
    int num;
    for(num=32;num<=126;num++){
        ch=num;
        cout << "The character '" << ch; 
        cout << "' is represented as the number "; 
        cout << num << " in the computer.\n";
    }
    return 0;
}