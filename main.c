#include<stdio.h>
int gindex=333;
void test()
{
	printf("testfun\n");
}
int main()
{
	for(gindex=0;gindex<9;gindex++)
		printf("%d\n",gindex);
	return 0;
}
