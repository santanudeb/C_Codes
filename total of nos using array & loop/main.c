#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],i,total=0;
    printf("Enter five no \n");
    for(i=0;i<5;i++)
       {
        scanf("%d",&a[i]);
        total=total+a[i];
       }
     printf("elements are...");
    for (i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    printf("Total is %d",total);
    return 0;
    getch();
}
