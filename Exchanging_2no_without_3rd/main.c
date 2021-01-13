#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter value for A");
    scanf("%d",&a);
    printf("Enter value for B");
    scanf("%d",&b);

    a=a-b;
    b=b+a;
    a=b-a;

    printf("A is %d",a);
    printf("B is %d",b);

    return 0;
}
