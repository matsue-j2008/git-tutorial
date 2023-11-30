#include<stdio.h>

int main
{
	int a = 0;
	for(int i = 1;i<=100;i++)
	{
		a+=i;
		if(a%3==0)
		{
			ptintf("fizz\n");
		}
		else if(a%5==0)
			printf("buzz\n");
		else if(a%3==0&&a%5==0)
			printf("fizzbuzz\n");
	}
	return 0;
}
