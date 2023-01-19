#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int div2(int *n)
{
	int d;
	int *b = n;
	int c = *b;

	d = c / 2;
	return (d);
}

int div3(int *n)
{
	int d;
	int *b = n;
	int c = *b;

	d = c / 3;
	return (d);
}

int div5(int *n)
{
	int d;
	int *b = n;
	int c = *b;

	d = c / 5;
	return (d);
}

int div7(int *n)
{
	int d;
	int *b = n;
	int c = *b;

	d = c / 7;
	return (d);
}

int main()
{
	int n;

	n = 456123;
	printf("size of n :%ld\n", sizeof(n));
	/*printf("string of n:%ld", strlen(toArray));*/

	if(n % 2 == 0)
	{
		printf("%d = %d * 2\n",n ,div2(&n));
	}
	if(n % 3 == 0)
	{
		printf("%d = %d * 3\n",n ,div3(&n));
	}
	if(n % 5 == 0)
	{
		printf("%d = %d * 5\n",n ,div5(&n));
	}
	if(n % 7 == 0)
	{
		printf("%d = %d * 7\n",n ,div7(&n));
	}
	else
		printf("Try again\n");

	return (0);
}
