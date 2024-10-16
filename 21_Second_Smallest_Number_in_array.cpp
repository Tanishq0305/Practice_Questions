// Program to find second smallest number in an array
#include<iostream>
using namespace std;

void secondSmallestNum(int arr[], int N)
{
    int min = arr[0];
    int point = arr[0]; 
    int store; 

    for(int i =0; i<N;i++)
    {
        if(arr[i]<min)
        {
        min = arr[i];
        // store = arr[0];
        arr[i] = arr[0];
        arr[0] = min;
        }
    }

    cout<<"Smallest Term: "<<arr[0]<<endl;
    store = arr[1];
    for(int i = 1; i<N;i++)
    {
        if(arr[i]<store)
        {
            store = arr[i];
        }

    }
    cout<<"Second Smallest Number: "<<store<<endl;
}

int main()
{
    int arr[] = {9,5,3,0,5};
    int N = sizeof(arr) / sizeof(arr[0]);
    secondSmallestNum(arr,N);
}