#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter the size of triangle : ");
	scanf("%d",&n);

	int arr[n][n];
	for(i=0;i<n;i++)
	{
		for(int k=0;k<n-i;k++)
			printf("  ");
		for(j=0;j<=i;j++)
		{
			if (i==j || j==0)
				arr[i][j] = 1;
			else
				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
}

