// Program to find sum of elements in array
#include<iostream>
using namespace std;

void sumOfElements(int arr[], int N)
{
    int sum = 0;
    for(int i =0; i<N;i++)
    {
        sum += arr[i];
    }

    cout<<"Sum of elements of array: "<<sum<<endl;
}

int main()
{
    int arr []= { 1,2,3,4};
    int N = sizeof(arr) / sizeof(arr[0]);
    sumOfElements(arr, N);
}