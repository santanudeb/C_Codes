#include <stdio.h>
#include <stdlib.h>

int sum(int no)
{
    static int total=0;
    total=total+no;
    return total;
}

int main()
{
    printf("%d\n",sum(50));
    printf("%d\n",sum(25));
    printf("%d\n",sum(30));
    return 0;
}
