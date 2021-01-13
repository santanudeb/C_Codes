#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,reminder,reverse=0;
    int i_copy;
    printf("Enter a Integer:\n");
    scanf("%d",&i);
    i_copy=i;

    while(i!=0)
        {
        reminder=i%10;
        reverse=reverse*10+reminder;
        i=i/10;
        }
    //printf("Reverse is %d",reverse);

    if (i_copy==reverse)
    {
        printf("\n%d is Palindrome",i_copy);
    }
    else
    {
        printf("\n%d is not Palindrome",i_copy);
    }


    return 0;
}
