//Program to find factorial of number using loops
#include<iostream>
using namespace std;

int fact(int num)
{
    int fact =1 ;
    if(num <=0)
    {
        cout<<"The factorial is: 1"<<endl;
        return 1;
    }
    else
    {
        while(num>0){
            fact *= num;
            num--;
        }

        cout<<"The factorial is: "<<fact<<endl;
        return fact;
    }
    
}

int main()
{

/*
1! = 1
2! = 2*1
3! = 3*2*1
4! = 4*3*2*1
*/
fact(1);
fact(2);
fact(0);
fact(3);
fact(5);
}