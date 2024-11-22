#include<stdio.h>

void structure_func()
{
    //You can also define and declare struct outside of any function
    struct my_struct
    {
        int num;
        char a;
    };

    struct my_struct s1;
    s1.num = 12;
    s1.a = 'A';

    printf("The num is: %d",s1.num);
    printf("\n");
    printf("The char is: %c",s1.a);

}

int main()
{
    structure_func();
    return 0;
}