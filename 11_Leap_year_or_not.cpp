//Program to knwo whether given year is leap or not
#include<iostream>
using namespace std;

bool leapOrnot(int num)
{
    if(num%400 == 0)
        return true;
    
    if(num%100 == 0)
        return false;
    
    if(num%4 == 0)
        return true;
    
    return false;

}

int main()
{
cout<<"Year 2000 is: "<<leapOrnot(2000)<<endl;
cout<<"Year 2024 is: "<<leapOrnot(2024)<<endl;
cout<<"Year 2005 is: "<<leapOrnot(2005)<<endl;
cout<<"Year 1900 is: "<<leapOrnot(1900)<<endl;
cout<<"Year 1999 is: "<<leapOrnot(1999)<<endl;
}