#include <iostream>
using namespace std; 
int main () 
{ 
for(char ch='A';ch<='G';ch++)
{
    for(int num=1;num<=5;num++)
    cout<<ch<<num<<"\t";
    cout<<"\n\n";
}
return 0;
}  