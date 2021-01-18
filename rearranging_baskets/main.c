#include<stdio.h>

int main()
{
  int n, a[100],flag=0,i,j,temp;
  scanf("%d",&n);
  for(i=0;i<n;i++)
     scanf("%d",&a[i]);

 for(i=0;i<n-1;i++)
 {
   for(j=0;j<n-i-1;j++)
 		{
   			if(a[j]>a[j+1])
            {

              temp= a[j];
              a[j] = a[j+1];
              a[j+1] = temp;
            }
 		}
 }
    for(i=0;i<n;i++)
    {
     if(a[i]==a[i+1])
     {
      flag=1;
       break;
     }
    }
    if(flag==1)
     printf("NO");
    else
      printf("YES");

 return 0;
 }

 /*

 You are provided with N baskets such that they can be placed one inside another. Any basket can contain only one basket directly inside it depending on the size.
Given the sizes of N baskets, output "YES" if it is possible to nest them all and have one basket on the outside and "NO" otherwise.

Input:
The first line contains the integer N, denoting the number of baskets
The second line contains N separated integers denoting the size of the baskets

Output:
Print "YES" if the baskets can be nested inside each other and "NO" otherwise

Constraints:
1 <= N <=100
1 <= basket size <= 1000

Example:
Input:
3
3 1 1

Output:
NO

Explanation:
Two baskets are of size 1 hence cannot be put in one another.

*/
