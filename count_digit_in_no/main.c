#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n;
    int count=0,x,reminder;

    printf("Enter an integer: ");
    scanf("%lld",&n);

    printf("Enter the digit you  want to count: ");
    scanf("%d",&x);

    while(n!=0)
    {
        reminder=n%10;
        if (reminder==x)
        {
            ++count;
        }
        n=n/10;
    }

    printf("Number of digits: %d",count);
    return 0;
}
