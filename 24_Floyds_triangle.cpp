// Program to draw Floyd's triangle
#include<iostream>
using namespace std;

void FloydTriangle(int row)
{
    int num = 1;

    for(int i = 0; i<row;i++)
    {
        for(int j =0; j<=i ; j++)
        {
            cout<<num++<<" ";
        }
        cout<<endl;
    }
 
}

int main()
{
    FloydTriangle(4);
}