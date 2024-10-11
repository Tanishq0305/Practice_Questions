// Program to find Nth term in fibonacci series using Recursion
#include<iostream>
using namespace std;

int NthTerm(int num)
{
    if(num<=1)
        return num;
    return NthTerm(num-1) + NthTerm(num-2);
}

int main()
{
    cout<<NthTerm(2)<<endl;
    cout<<NthTerm(1)<<endl;
    cout<<NthTerm(0)<<endl;
    cout<<NthTerm(13)<<endl;
}