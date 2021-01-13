#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stu[2][3],a,b,total=0;
    printf("Enter 6 Nos \n");
    for(a=0;a<2;a++)
    {
        for(b=0;b<3;b++)
          {
              scanf("%d",&stu[a][b]);
          }
    }

    printf("Nos are\n");
    for(a=0;a<2;a++)
    {
        for(b=0;b<3;b++)
        {
            printf("\t%d",&stu[a][b]); // \t is for space//
            total=total+stu[a][b];
        }
           printf("\t%d",total);
           total=0; // making total 0 for the next loop//
           printf("\n");
    }

    getch();
}

//did'nt work??
