// A program to check a number is even or odd

#include <iostream>
using namespace std;

bool isEven(int num){
    if(num%2==0){
        cout<<"Number is even";
        return true;
    }else{
        cout<<"Number is Odd";
        return false;
    }
}

int main(){
    // int num1 = 1002;
    isEven(1);
}