#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,i,j;
    printf("Enter Row\n");
    scanf("%d",&row);

    for(i=1;i<=row;i++)
    {
        for (j=row;j>=i;j--)
        {
            printf("%d ",j);
        }
        for (j=i+1;j<=row;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}

/*

f)
4 3 2 1 2 3 4
4 3 2 3 4
4 3 4
4 ….. upto n lines

*/
