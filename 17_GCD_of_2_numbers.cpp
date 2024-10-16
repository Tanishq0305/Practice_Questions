//Program to find GCD or HCF or 2 numbers
// We cannot find a%0
//  We cannot find 0%0
//GCD means greatest number which can divide both numbers
#include<iostream>
using namespace std;

int GCDfunct(int a, int b)
{
    while (b!=0)
    {
        int remainder = a%b;
        a=b;
        b = remainder;
    }
    cout<<a<<endl;
    return a;
}

int main()
{
    GCDfunct(3,1);
    GCDfunct(16,8);
    GCDfunct(4,2);
    GCDfunct(14,3);

}