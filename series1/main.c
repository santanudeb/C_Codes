#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0,i,no=2;
    printf("Enter N:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        //printf("%d\n",i);
        sum=sum+no;
        no=no+2;
    }
    printf("%d",sum);

    return 0;
}

/*

(a) 2 + 4 + 6 + 8 + …………….. upto n terms

*/
