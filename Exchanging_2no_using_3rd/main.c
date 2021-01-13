#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c=0;
    printf("Enter value for A");
    scanf("%d",&a);
    printf("Enter value for B");
    scanf("%d",&b);

    c=b;
    b=a;
    a=c;

    printf("A is %d",a);
    printf("B is %d",b);

    return 0;
}
