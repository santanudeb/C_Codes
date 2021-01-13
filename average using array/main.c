#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grades[3]; //defines an array//
    int avg;
    grades [0]=100; //array starts with 0//
    grades [1]=200;
    grades [2]=180;

    avg=(grades [0]+grades [1]+grades [2])/3;

    printf("Avg of 3 no%d",avg);
    printf("an array %d",grades[1]); //printing an array//
    return 0;
}
