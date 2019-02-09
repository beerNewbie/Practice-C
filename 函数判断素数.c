
#include <stdio.h>
int Is_prime(int x)
{
	int j = 0;
	for(j=2; j<x; j++)
	{
		if(x%j == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i = 0;
	for(i=100; i<=200; i++)
	{
		if(Is_prime(i) == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
