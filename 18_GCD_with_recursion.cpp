//Program to find GCD of 2 numbers using recursion
#include<iostream>
using namespace std;

long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


int main()
{
    cout<<"GCD: "<<gcd(0,6);
    return 0;
}