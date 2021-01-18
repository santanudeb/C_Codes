#include<stdio.h>

int find_left(int *, int, int);
int find_right(int *, int, int);



int main()
{
	int index,sum,sum_l,n,sum_r,lower,upper,i,arr[100],min;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	for(i=0;i<n;i++)
	{
		lower=0;
		upper=n-1;
		sum_l= find_left(arr,lower,i);
		sum_r= find_right(arr,i,upper);
		sum=sum_l+sum_r;
		if(i==0)
		{
			min = sum;
			index=i;
		}
		else
		{
			if(sum<min)
			{
				min=sum;
				index=i;
			}
		}
	}
	printf("%d",index+1);

	return 0;
}

int find_left(int *arr,int lower,int upper)
{
  int i,sum=0;
  for(i=lower;i<=upper;i++)
  {
		sum+=arr[i];
  }
  return sum;
}

int find_right(int *arr,int lower,int upper)
{
	int i,sum=0;
	for(i=lower;i<=upper;i++)
	{
		sum+=arr[i];
	}
	return sum;
}

/*

Given an array A of N positive integers, you are provided with two functions sumprefix(i) and sumsuffix(i).
The sumprefix(i) function computes the sum of first i numbers of the array.
The sumsuffix(i) function computes the sum of last N - i + 1 numbers of the array.
Your task is to find the minimum index i for which the value sumprefix(i) + sumsuffix(i) is the minimum. Which means you need to minimize the value of sumprefix(i) + sumsuffix(i)
and find the least index i for which this value is attained.

Input:
The first line of input contains the integer N denoting the number of elements in array A.
The second line contains the N separated elements of array A.

Output:
Output the single line containing the answer.

Constraints:
1 <= N, A[i] <= 105

Example:
Input:
3
1 2 3

Output:
1

Explanation:
Let's calculate the sumprefix(i) + sumsuffix(i) for all i.

sumprefix(1) + sumsuffix(1) = 1 + 6 = 7
sumprefix(2) + sumsuffix(2) = 3 + 5 = 8
sumprefix(3) + sumsuffix(3) = 6 + 3 = 9

*/
