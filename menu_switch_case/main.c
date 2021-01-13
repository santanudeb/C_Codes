#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b,c=0;
    printf("Choose\n");
    printf("1. Sum");
    printf("2. Difference");
    printf("3. Product");
    printf("4. Division");
    scanf("%d",&i);
    printf("Give 1st no");
    scanf("%d",&a);
    printf("Give 2nd no");
    scanf("%d",&b);

    switch(i)
    {
    case 1:
        c=a+b;
        break;
    case 2:
        c=a-b;
        break;
    case 3:
        c=a*b;
        break;
    case 4:
        c=a/b;
        break;
    default:
        printf("invalid");
        break;
    }
    printf("Result is%d",c);


    return 0;
}
