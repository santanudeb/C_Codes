#include <stdio.h>
#include <stdlib.h>
//•	Write a program to print the reverse of a 3 digit no. without using loop.

int main()
{
    int a,reverse=0,reminder;
    printf("Enter an Integer\n");
    scanf("%d",&a);

    while(a!=0)
        {
        reminder=a%10;
        reverse=reverse*10+reminder;
        a=a/10;
        }
    printf("Reverse is %d",reverse);

    return 0;
}
