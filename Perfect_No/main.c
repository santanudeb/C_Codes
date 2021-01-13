#include <stdio.h>
#include <stdlib.h>

int main()
{
    int given_no,i,factors=0,garbage;
    printf("Give a No:\n");
    scanf("%d",&given_no);

    for(i=1;i<given_no;i++)
    {
        if(given_no%i==0)
        {
            printf("factors are:%d\n",i);
            factors=factors+i;
        }
    }

    printf("Factors:%d\n",factors);
    printf("Given no:%d\n",given_no);

    if (factors==given_no)
    {
        printf("Given No %d is Perfect\n",given_no);
    }
    else
    {
        printf("Given No %d is Not Perfect\n",given_no);
    }

    return 0;
}

//6,28,496,8128 are perfect numbers;
