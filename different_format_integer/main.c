#include <stdio.h>
#include <stdlib.h>
//•	program that will demonstrate the different format of integer number

int main()
{
    int w;
    printf("\n|%d|",1234);
    printf("\n|%3d|",1234);
    printf("\n|%7d|",1234);
    printf("\n|%-7d|",1234);
    printf("\n|%+7d|",1234);
    printf("\n|%07d|",1234);
    printf("\nEnter Width:",1234);
    scanf("\n%d",&w);
    printf("\n|%*d|",w,1234);
    printf("\n|%0*d|",w,1234);
    return 0;
}
