#include <stdio.h>
#include <stdlib.h>
//•	Write a program to calculate the total pay of an employee providing 10000 basic, 50% DA, and 25% HRA.

int main()
{
    float basic,da,hra;
    float total;

    basic=10000;
    da=.5*basic;
    hra=.25*basic;
    total=basic+da+hra;

    printf("Total is %f",total);
    return 0;
}
