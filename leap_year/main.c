#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;
    printf("Enter Year\n");
    scanf("%d",&y);

    if(y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0)
            {
                printf("Leap year");
            }
            else
            {
                printf("Not leap year");
            }
        }
        else
        {
            printf("Leap year");
        }
    }
    else
    {
        printf("Not leap year");
    }

    return 0;
}
