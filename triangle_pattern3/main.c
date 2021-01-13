#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,length;
    printf("Enter Length:\n");
    scanf("%d",&length);

    for (x=1;x<=length;x++)
    {
        for (y=length;y>=x;y--)
        {
            printf("%d ",y);
        }
        printf("\n");
    }

    return 0;
}

/*

(c)
4 3 2 1
4 3 2
4 3
4 ….. upto n lines

*/
