#include <stdio.h>
#include <stdlib.h>
//•	Write a program to find out the simple interest//

int main()
{
    int interest=0,amount,rate,time;
    printf("Enter Amount");
    scanf("%d",&amount);
    printf("Enter Rate");
    scanf("%d",&rate);
    printf("Time");
    scanf("%d",&time);

    interest=(amount*rate*time)/100;
    printf("The Interest is %d",interest);
    return 0;
}
