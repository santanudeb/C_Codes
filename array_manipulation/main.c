#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j,max,n,k,*arr;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter k:");
	scanf("%d",&k);

	arr=(int *)malloc(n*(sizeof(int)));

	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	if(n==1)
	 {
		max=arr[n-1];
		arr[n-1]=max-arr[n-1];
		printf("%d",arr[n-1]);
	 }
	else
	 {
		if(k==0)
		{
			for(j=0;j<n;j++)
			{
					if(j==0)
							printf("%d",arr[j]);
				else
					printf(" %d",arr[j]);
			}
		}
		else if(k%2==0)
		{
			for(i=0;i<2;i++)
			{

				for(j=1;j<n;j++)
				{
					max=arr[j-1];
					if(arr[j]>max)
						max=arr[j];
				}
				for(j=0;j<n;j++)
				{
					arr[j]=max-arr[j];

				}//inner for

			}//outer for


			for(i=0;i<n;i++)
				{
					 if(i==0)
						  printf("%d",arr[i]);
					 else
						  printf(" %d",arr[i]);
				}
		}//inner else

		else if(k%2==1)
		{
			for(i=0;i<1;i++)
			{
				for(j=1;j<n;j++)
				{
					max=arr[j-1];
					if(arr[j]>max)
						max=arr[j];
				}

				for(j=0;j<n;j++)
				{
					arr[j]=max-arr[j];

				}//inner for

				for(j=0;j<n;j++)
				{
					if(j==0)
						printf("%d",arr[j]);
					else
						printf(" %d",arr[j]);
				}

			}//outer for


		}

    }//outer else

	return 0;
}

/*

Given an array X of N numbers and an integer K, during a turn maximum value of array Xi is chosen as MAX.
Then Xi = MAX-Xi is done for every 1<=i<=N. Write a program in C to find the array after K turns. Input:
The first line of input contains the number N and K respectively.
N is the number of elements in the array and K is the number of turns. Output: Output N numbers in a single line after K turns.
It should be the elements of array X after K turns Example: Input: 4 1 5 -1 7 0 Output: 2 8 0 7 Constraints: 1<=N<=105 0<=K<=109
Xi <= 109

*/
