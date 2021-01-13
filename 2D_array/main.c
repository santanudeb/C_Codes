#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3][2]={{1,2},{2,1},{2,2}};
    printf("%d",a[0][0]);
    printf("%d",a[0][1]);
    printf("\n");
	printf("%d",a[1][0]);
	printf("%d",a[1][1]);
	printf("\n");
	printf("%d",a[2][0]);
	printf("%d",a[2][1]);
}
/*

   0   1

0  1   2

1  2   1

2  2   2

*/
