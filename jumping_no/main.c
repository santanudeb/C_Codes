#include <stdio.h>
#include <stdlib.h>

void main()
{
	long unsigned int inp,stp=0,cnt=1,flag=0;

	printf("\nEnter the step number: ");
	scanf("%lu",&inp);

	while(stp<=inp)
	{
		 if(stp==inp)
		 {
			  if(inp==0 && stp==0)
			  {
				 flag=0;
				 break;
			  }
			  else
			  {
				flag=1;
				break;
			  }
		 }
		 else
		 {
			if(cnt%2==0)
			{
				stp+=2;
				cnt++;
			}
			else if(cnt%3==0)
			{
				stp+=3;
				cnt=1;
			}
			else
			{
				stp+=1;
				cnt++;
			}
		 }//else
	}//while

	if(flag==1)
		printf("YES");
	else
		printf("NO");

}

/*
question:

One day Ajit got a strange feeling of jumping from one point to another on a number line (containing positive integers). The jumping from one point to another can only be done in one dimension. He will start from point 0 from which he will do a lot of jumps. He can only jump in a specific sequence: 1-jump, 2-jump, 3-jump, 1jump, 2-jump, 3-jump, 1-jump, and so on. (1->2->3->1->2->3->1...) 1-jump means that if Ajit is at point x on the number line, he will jump to the point x+1. 2-jump means that id Ajit is at point x on the number line, he will jump to the point x+2.
3-jump means that id Ajit is at point x on the number line, he will jump to the point x+3.

Write a program in C which given the input point a outputs whether Ajit can reach this point a after some number of jumps or not.

Input: The first line contains a single integer a denoting the point Ajit asks about.
Output: Output "YES" without a quotes if Ajit can arrive at point a or "NO" without a quotes otherwise. Example1: Input: 3 Output: YES He can take jump sequence (1¬>2) to reach point 3.
Input: 2 Output: NO From 0 he can take 1 jump to reach point 1 but after that he can take only 2 jumps which will lead him to point 3. Jump sequence (1¬>2).
Constraints:  0<=a<=1018

*/
