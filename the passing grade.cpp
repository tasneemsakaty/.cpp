#include <iostream>
using namespace std;
int main() {
    int grade;
    cout<<"What is your grade?" <<endl;
    cout<<"It is ";
    cin>>grade;
    if(grade >= 60)
    {
        cout<<"Passed" <<endl;
        cout<<"Congratulations" <<endl;
    }
    else 
    {
        cout<<"failed" <<endl;
        cout<<"Hard luck" <<endl;
    }
    cout<<"Bye bye";
    return 0;
}