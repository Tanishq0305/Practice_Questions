// Determining the string length without using the strlen()
#include<iostream>
using namespace std;

void stringlen(string a)
{
    int length = 0;
    for(int i=0; a[i] != '\0'; i++)
    {length++;}

    cout<<"Given String length is: "<<length<<endl;
    
}

int main()
{
    stringlen("Hello");
    stringlen("Tanishq");
}