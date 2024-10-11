// Determining whether given character is vowel or consonant
#include<iostream>
using namespace std;

void isVowel(char a){
char lowerchar = tolower(a);

if(isalpha(lowerchar))
{
    if( a == 'a' || 'e' || 'i' || 'o' || 'u')
        {
            cout<<"The character "<<a<<" is Vowel"<<endl;
        } 
    else{
    cout<<"The character "<<a<<" is a consonant"<<endl;
    }
}
else
{
cout<<"The character is not a alphabet"<<endl;
}


}

int main(){

isVowel('a');
isVowel('A');
isVowel('q');
isVowel('Q');
isVowel('1');


}