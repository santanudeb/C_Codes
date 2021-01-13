#include <stdio.h>
#include <stdlib.h>

int main()
{
    int given_weight,charges,extra_weight;
    printf("Enter A Weight");
    scanf("%d",&given_weight);

    extra_weight=given_weight-20;

    if (extra_weight>0)
    {
      printf("Extra: %d\n",extra_weight);
      if(extra_weight%10==0)
      {
          extra_weight=extra_weight/10;
      }
      else
      {
          extra_weight=(extra_weight/10)+1;
      }

    }
    else
    {
      extra_weight=0;
    }
    charges=25+(extra_weight)*5;

    printf("Charges: %d",charges);

    return 0;
}
