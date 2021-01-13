#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name2[6]={'m','o','r','t','y','\0'};
    char name[]="Morty";
    printf("%s\n",name);
    printf("\c",name2[2]); // why /c? //
    return 0;
}
