// Program to know whether given number is armstrong or not
#include<iostream>
#include<cmath>
using namespace std;

void armstrongOrNot(int num)
{

    int sum = 0;
    int digit = 0;
    int originalNumber = num;
    
    //Counting total number of digits 
    while(originalNumber>0)
    {
        originalNumber /= 10;
        digit++;
        // cout<<"In digit: "<<endl;
        // cout<<digit;
    }

    originalNumber = num; //reset number
    while(originalNumber!=0)
    {
        int reg;
        reg = originalNumber%10;
        sum += pow(reg, digit);
        cout<<" Pow: "<<pow(reg,digit)<<endl;
        cout<<" reg: "<<reg<<endl;
        cout<<" SUM: "<<sum<<endl;

        originalNumber /= 10;
        
    }
    if(sum == num)
        cout<<"The given number is armstrong";
    else
        cout<<"Given number is not armstrong";
    


}

int main()
{

    armstrongOrNot(153);
}