#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,a[100][100],b[100][100],sum[100][100],i,j;
    printf("Enter Row:\n");
    scanf("%d",&r);
    printf("Enter Column:\n");
    scanf("%d",&c);

    printf("Enter 1st matrices:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter value for [%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter 2nd matrices:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter value for [%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("Sum of 2 matrices: done!\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("Showing sum of 2 matrices:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
