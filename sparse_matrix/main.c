#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j,k,c=0,a[10][10];
    int *p;
    printf("Enter the no of row and column:");
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=0)
            {
                c++;
            }

        }
    }
    printf("%d ",c);


i=0;

        p = (int*) malloc(3*(c+1)*sizeof(int));
                p[i++] = m;
                p[i++]=n;
                p[i++]= c;

        for(j=0;j<m;j++){
        for(k=0;k<n;k++){
            if(a[j][k]!=0)
            {
                p[i++] = j+1;
                p[i++]=k+1;
                p[i++]= a[j][k];
            }
        }
          }
          for(i=0;i<(3*(c+1));i++)
          {
              if(i%3==0)
                printf("\n");

              printf("%d\t",p[i]);
          }
    return 0;
}
