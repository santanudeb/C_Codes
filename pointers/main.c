#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=100;
    int *p; // *p is pointer variable. which will point only int variable;
    p=&a; // p holds the address of a. This method is called referencing. Giving address to pointer;

    printf("%d\n",a); //will show value in a;
    printf("%p\n",&a); //will show address of a;
    printf("%d\n",*p);//will show the value in a. This method is called dereferencing, accessing the value a through pointer.
    printf("%p\n",p); //will show address of a;
    printf("%p\n",&p);//will show address of p;

    return 0;
}
