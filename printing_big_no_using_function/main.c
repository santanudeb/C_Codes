#include <stdio.h>
#include <stdlib.h>

void big(int no);

int main()
{
    int array[]={1,11,2,22,3,33,4,44,5,55,6,66};
    int i;
    for (i=0;i<12;i++)
    {
        big(array[i]);
    }
    return 0;
}

void big(int no)
{
    if (no>10)
    {
        printf("\n%d is big no",no);
    }
}

