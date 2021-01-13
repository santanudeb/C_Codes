#include <stdio.h>
#include <stdlib.h>
//•	program that will demonstrate the different format of floating point number

int main()
{
    int w,p;
    printf("\n|%f|",123.45);
    printf("\n|%e|",123.45);
    printf("\n|%.1f|",123.45);
    printf("\n|%.3f|",123.45);
    printf("\n|%8.2f|",123.45);
    printf("\n|%-8.2f|",123.45);
    printf("\n Enter Width");
    scanf("\n%d",&w);
    printf("\n Enter Precession");
    scanf("\n%d",&p);
    printf("\n|%*.*f|",w,p,123.45);
    printf("\n|%-*.*f|",w,p,123.45);
    return 0;
}
