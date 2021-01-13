#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a=1;
  int *p=&a; // pointer to a, carrying address of a;
  printf("*p has %p\n",p);
  printf("a is %d\n",a);
  *p = *p+1;

  printf("a is %d\n",a);
  printf("*p has %p\n",p);

  //value of a changed, not the address that sored in p;
  return 0;
}
