#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,sum=0,prev=1;
    printf("Enter N\n");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
       prev=prev+i;
       sum=sum+prev;
       printf("%d\n",prev);
    }
    printf("Sum:%d",sum);

    return 0;
}

/*

(b) 1 + 2 + 4 + 7 + 11 + 16 + ……………. upto n terms
(>) 2nd= 1+1
(>) 3rd= 2+2
(>) 4th= 4+3
(>) 5th= 7+4
*/
