#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,length;
    printf("Enter Length:\n");
    scanf("%d",&length);

    for(x=1;x<=length;x++)
    {
        for (y=x;y>=1;y--)
        {
           printf("%d ",x);
        }
        printf("\n");
    }

    return 0;
}

/*
(d)
1
2 2
3 3 3
4 4 4 4 ….. upto n lines
*/
