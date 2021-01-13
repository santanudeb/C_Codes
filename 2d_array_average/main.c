#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grades [2][3];
    float total=0,average=0;
    int i;
    int j;

    grades [0][0]=82;
    grades [0][1]=63;
    grades [0][2]=75;

    grades [1][0]=65;
    grades [1][1]=90;
    grades [1][2]=88;

    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
           total=total+grades[i][j];
        }

        average=total/3;
        printf("Average of %d is: %.2f\n",i,average);
    }

    return 0;
}
