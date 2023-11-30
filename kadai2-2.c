#include<stdio.h>

int main
{
	int a = 0;
	for(int i = 1;i<=100;i++)
	{
		a+=i;
		if(a%3==0)
			ptintf("fizz\n");
		if(a%5==0)
			printf("buzz\n");
		if(a%3==0&&a%5==0)
			printf("fizzbuzz\n");
		if(a%7==0)
			printf("git\n");
	}
	return 0;
}
