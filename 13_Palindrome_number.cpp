//Program to check whether given number is palindrome or not
#include<iostream>
using namespace std;

void palindromeOrNot(int num)
{
    int originalNumber = num;
    int reversednum = 0;

    //reverse the number
    while(num>0)
    {
        int digit = num%10;
        reversednum = reversednum *10 + digit;
        num = num/10;
    }

    if(originalNumber == reversednum)
        cout<<"Give Number is palindrome"<<endl;
    else
        cout<<"Give Number is not a palindrome"<<endl;
}

int main()
{

    palindromeOrNot(100);
    palindromeOrNot(12321);
    }