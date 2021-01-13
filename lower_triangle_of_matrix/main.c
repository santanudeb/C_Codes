#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],i,j,r,c;

    printf("Enter Row:\n");
    scanf("%d",&r);
    printf("Enter Column:\n");
    scanf("%d",&c);

    printf("Enter Elements:\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("Enter value for[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Showing Matrix:\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }

    //Lower Triangle
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            if(i<j)
            {
                a[i][j]=0;
            }
        }
    }

    printf("Showing Matrix After Lower Triangle:\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
