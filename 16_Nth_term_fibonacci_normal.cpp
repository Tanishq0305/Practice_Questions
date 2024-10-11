// Program to find Nth term in Fibonaaci series without using recursion
#include<iostream>
using namespace std;

int nthTerm(int num)
{

    int currentNum = 1;
    int PreviousNum = 0;
    int NextNum;
    int i = 0;

    if(num<=1){return num;}        
    

    while(i != num)
    {
        NextNum = PreviousNum + currentNum;
        PreviousNum = currentNum;
        currentNum = NextNum;
        i++;
    }
    return currentNum;
}

int main()
{
    cout<<nthTerm(13)<<endl;
    cout<<nthTerm(1)<<endl;
    cout<<nthTerm(0)<<endl;
    return 0;
}