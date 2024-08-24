#include<stdio.h>
#include<string.h>

int main()
{
	char buf[] = "abcdefghijklmnopqrstuvwxyz";
	int c=0,n;
	printf("Enter the number to which string fragment :");
	scanf("%d",&n);
	for(int i = 0; buf[i];i++)
	{
		if(c < n)
		{
			printf("%c ",buf[i]);
			c++;
		}
		else
		{
			printf("\n%c ",buf[i]);
			c = 1;
		}
	}
}
