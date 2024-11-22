#include<stdio.h>

void pointers()
{
    int* ptr;
    int arr[3] = {5,2,1};
    ptr = arr;

    printf("The elements are: ");
    printf("%d",ptr[0]);
    //Or it can be printed as
    //printf("%d",*ptr);
}

int main()
{
    pointers();
    return 0;
}