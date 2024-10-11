// Print the ASCII value of character
#include <iostream>
using namespace std;

void ascii_func(char a)
{
cout<<"ASCII value of: "<<a<<" is "<<int(a)<<endl;
}

int main(){
    int num = 10;
    char ch = 'A';
    
    ascii_func(3);
    ascii_func('A');
}