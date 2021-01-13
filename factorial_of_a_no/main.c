#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    unsigned long long factorial=1;
    printf("Enter The number:");
    scanf("%d",&n);
    if (n<0)
    {
        printf("Error %d");
    }
        else
    {
        for (i=1;i<=n;i++)
        {
            factorial=factorial*i;
        }
        printf("Factorial of Given No %d=%llu",n,factorial);
    }
    return 0;
}
