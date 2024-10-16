// Program to draw Floyd's triangle
#include<iostream>
using namespace std;

void FloydTriangle(int row)
{
    for(int i=1; i<row;i++)
    {
        for(int j = 0; j<i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    FloydTriangle(4);
}