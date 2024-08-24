#include<stdio.h>
int main()
{
        int size,i,j,k;
        printf("enter the size of swasthik : ");
        scanf("%d",&size);
        if(size%2)
        {
                for(i=0;i<size;i++)
                {
                        for(j=0;j<size;j++)
                        {
                                if((i==size/2) || (j==size/2) || i<=size/2 && j==0 || i==size-1 && j<=size/2 || i>=size/2 && j==size-1 || i==0 && j>=size/2)
                                        printf("* ");
                                else
                                        printf("  ");
                        }
                        printf("\n");
                }
        }
        else
        printf("according to vedic rules the swasthik should be symmetric\n");
}
