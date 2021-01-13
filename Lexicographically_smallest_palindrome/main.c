#include<stdio.h>


int main()
{
	char str[100],rev[100];
	int i=0,len=0,pal=0;

	scanf("%s",str);

	while(str[i]!='\0')
	{
		len++;
		i++;
	}

	i=0;

	if(str[i]!=str[len-1])
		printf("-1");
	else
	{

		while(str[i]!='\0')
		{
			if(str[i]=='.')
			{
				if(str[i+1]!='a')
					str[i]=str[i+1]-1;
				else
					str[i]=str[i+1];
			}//if
			i++;
		}//while


		i=0;
		while (len>0)
		{
			rev[i]=str[len-1];
			i++;
			len--;
		}//while
		rev[i]='\0';

		i=0;

		while(str[i]!='\0')
		{
			if(str[i]!=rev[i])
			{
				pal=1;
				break;
			}
			i++;
		}//while

		if(pal==0)
			printf("%s",str);
      	else
          	printf("-1");
	}


  return 0;


}
