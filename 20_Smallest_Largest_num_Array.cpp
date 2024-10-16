// Program to find the smallest and largest number in an array
// We cannot use the sizeof() in other function than main because it decays the pointer
#include<iostream>
using namespace std;

void SmallestLargest(int arr[], int N)
{
  
int min = arr[0];
int max = arr[0];

for(int i =0; i<N; i++)
{
    if(arr[i]<min)
    {
        min = arr[i];
    }

    if(arr[i]>max)
    {
        max = arr[i];
    }
}

cout<<"Maximum Number: "<<max<<endl;
cout<<"Minimum Number: "<<min<<endl;
}

int main()
{
    int arr[] = { 1, 2, 8, 4, 0 };
     int N = (sizeof(arr)/sizeof(arr[0]));
    //   cout<<N;
    SmallestLargest(arr, N);
}