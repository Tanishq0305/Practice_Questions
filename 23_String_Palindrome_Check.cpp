//Program to check whether given string is palindrome or not
#include<iostream>
using namespace std;

bool StringPalindrome(string str, int lengthstr)
{
    for(int i = 0; i<lengthstr/2;i++)
    {
        if(str[i] != str[lengthstr-i-1])
        {
            cout<<"String is not Palindrome"<<endl;
            return false;
        }
       
    }
     cout<<"String is palindrome"<<endl;
    return true;

}

int main()
{
    string str = "ABCDCBA";
    int i =0;
    while(str[i] != '\0')
    {
        i++;
    }
    // cout<<"Length of string: "<<i<<endl;
    StringPalindrome(str, i);
}