#include<stdio.h>

int main()
{
	char str1[100],str2[100];
	int val1=0,val2=0,i=0,j=0;

    printf("Enter two string:");
	scanf("%s %s",str1,str2);


	while(str1[i]!='\0')
	{
		val1=val1+str1[i];
		i++;
	}


	while(str2[j]!='\0')
	{
		val2=val2+str2[j];
		j++;
	}

	if(val1==val2)
		printf("anagram");
	else
		printf("Not anagram");

	return 0;
}
