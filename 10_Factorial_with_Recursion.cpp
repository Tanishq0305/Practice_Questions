//Program to find factorial of number using recursion
#include<iostream>
using namespace std;

int fact(int num)
{
    if(num<=0){
        // cout<<"Factorial is 1"<<endl;
        return 1;
    }
    else
    {
        return num * fact(num-1);

    }

}

int main()
{
cout<<fact(0)<<endl;
cout<<fact(1)<<endl;
cout<<fact(5)<<endl;
}