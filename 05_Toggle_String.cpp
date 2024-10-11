// Write a program to Toggle each character in string
#include<iostream>
using namespace std;

string ToggleString(string str)
{
    string result;
    for(int i =0; i != str.length();i++)
    {
     if(isupper(str[i])){
        str[i] = tolower(str[i]);
     }else if (islower(str[i])){
         str[i] = toupper(str[i]);
     }  
    }

    return str;
}

int main()
{
cout<<ToggleString("Hi");
}