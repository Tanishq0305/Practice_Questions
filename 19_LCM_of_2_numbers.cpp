//Program to find LCM of 2 numbers
#include<iostream>
using namespace std;

long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to return LCM of two numbers
long long lcm(int a, int b)
{
    long long result = (a / gcd(a, b)) * b;
    return result;
}

int main()
{
    int a = 13, b = 24;
    // cout<<"GCD: "<<gcd(0,25);
    cout << "LCM : " << lcm(a, b);
    return 0;
}