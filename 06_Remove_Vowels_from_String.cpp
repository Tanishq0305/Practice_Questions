//Program to remove vowels from the string
#include<iostream>
using namespace std;

void RemoveVowels(string str)
{
    string str2;
    int i =0;
    // cout<<str.length();
    for(int j=0; j != str.length();j++)
    {
        if(str[j] != 'a' && str[j] != 'e' && str[j] != 'i' && str[j] != 'o' && str[j] != 'u' && str[j] != 'A' && str[j] != 'E'
         && str[j] != 'I' && str[j] != 'O' && str[j] != 'U'){
            str2 += str[j];
            // i++;
        }
        
    }

    cout<<"String after removing vowels: "<<str2<<endl;
    
}


int main()
{
    string str = "Hiiw";
    RemoveVowels(str);
}