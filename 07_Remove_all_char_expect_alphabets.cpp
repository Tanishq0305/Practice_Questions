// Program to remove all characters from string except the alphabets
#include<iostream>
using namespace std;

void removeChar(string str)
{
    string str2;
    for(int i=0;i<str.length();i++)
    {
        if(isalpha(str[i])){
            str2 += str[i];
        }
    }

    cout<<"String with only alphabets: "<<str2<<endl;
}

int main()
{
    removeChar("Hie2323jkf");
}