#include<stdio.h>
#define MAX(x,y) (x)>(y)?(x):(y)
int main()
{ 
	int i=10,j=5,k=0;
	k= MAX(i++,++j);
	printf("%d %d %d ",i,j,k);
}
