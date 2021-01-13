#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("Enter a Character in upper case\n");
    scanf("%c",&a);
    a=a+32;
    printf("%c",a);
    return 0;
}
