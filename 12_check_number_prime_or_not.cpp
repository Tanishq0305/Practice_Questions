// Write a program to check whether number is prime or not
#include<iostream>
using namespace std;

bool primeorNot(int num)
{
    if(num<=1)
        return false;
    if(num<=3)
        return true;

    if(num%2 == 0 || num%3 == 0)
    {
        return false;
    }
}

int main()
{

}