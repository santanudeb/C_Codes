#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,i,j,a[10][10],transpose[10][10];
    printf("Enter Rows:\n");
    scanf("%d",&r);
    printf("Enter Column:\n");
    scanf("%d",&c);

    //taking values
    printf("Enter Elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter The value for a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    //showing matrix

    printf("Showing Matrix:\n");
    for (i=0;i<r;i++)
    {
        for (j=0;j<c;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }

    //Transposing matrix

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            transpose[j][i]=a[i][j];
        }
    }

    //showing matrix after transpose

    printf("\nTranspose of Matrix:\n");
    for(i=0; i<c; i++)
        for(j=0; j<r; j++)
        {
            printf("%d  ",transpose[i][j]);
            if(j==r-1)
                printf("\n\n");
        }

    return 0;
}
