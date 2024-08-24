#include<stdio.h>

void fun(void (*ptr)(void))
{
	ptr();
}
void hii()
{
	printf("hello world!\n");
}
int main()
{
	fun(hii);
}
