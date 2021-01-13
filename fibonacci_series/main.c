#include <stdio.h>
#include <stdlib.h>

int main()
{
    int e,i;
    int n1=0,n2=1,n3=0;
    printf("Enter no of element\n");
    scanf("%d",&e);

    for(i=0;i<e;i++)
    {
        printf("%d\n",n3);
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }

    return 0;
}
