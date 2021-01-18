#include<stdio.h>
int sp(int);
int main()
{
  int i,n,cnt=0,div,s,rem;
  scanf("%d",&n);
  for(i=2;i<=n;i++)
  {
    rem=n%i;
    if(rem==0)
    {
      s=sp(i);
      cnt+=s;
    }
  }

	printf("%d",cnt);
    return 0;
}

int sp(int div)
 {
    int rem;
    if(div==3 || div==5 || div==6)
      return 1;

  else
  {
    while(div>0)
    {
      rem=div%10;
      div=div/10;
      if(rem==3 || rem==5 || rem==6)
        return 1;
    }
  }
}

/*



A number is special if it is possible to remove some digits from it to get a number having 3, 5 or 6 only.
For example, 38597 is special since it is possible to remove digits 8, 9, 7 to get 35. You cannot remove all the digits.
You can remove digits from left, right or middle.
Write a program in C which given a number N, calculate how many divisors of N are special

Input:
An integer N

Output:
Output in a single line the number of divisors which are special.

Constraints:
1 <= N <= 109
Example:
Input:
15

Output:
3



*/
