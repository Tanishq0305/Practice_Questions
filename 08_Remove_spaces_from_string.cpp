//Program to remove whitespaces from string
#include<iostream>
using namespace std;

void RemoveSpace(string str)
{
    string str2;
    for(int i=0; i<str.length();i++){
        if(str[i] != ' ')
        {
            str2 += str[i];
        }
    }

    cout<<"String after removing spaces: "<<str2<<endl;
}

int main()
{
    RemoveSpace("Hiw ii");
    RemoveSpace(" jo ");
    RemoveSpace(" ");
}