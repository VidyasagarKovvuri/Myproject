#include<stdio.h>

int main()
{
	int x,y,z;
	x=0;
	y=5;
	z=10;
	for(;x<=y<=z;x++,y++,z--)
	{
		printf("%d\n%d\n%d\n\n",x,y,z);
	}
}
