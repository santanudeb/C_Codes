#include <stdio.h>
#include <stdlib.h>
//•	Write a program to convert Centigrade to Fahrenheit and vice versa.

int main()
{
    float c,f;
    printf("Enter Centigrade");
    scanf("%f",&c);

    f=(1.8*c)+32;
    // fahrenheit = ((9/5) * celsius) + 32; logic
    // fahrenheit = ((1.8 * celsius) + 32;
    printf("Fahrenheit is %f",f);
    return 0;
}
