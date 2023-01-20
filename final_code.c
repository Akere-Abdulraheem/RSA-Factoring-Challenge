#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_LINE_LENGTH 1000

int div2(int *n);
int div3(int *n);
int div5(int *n);
int div7(int *n);

int main(int argc, char *argv[])
{
	/*(void) argv;*/
	char *storage = argv[1];
	int count = argc;
	FILE *xfile = fopen(storage, "r");
	char line [MAX_LINE_LENGTH];
	
	
	printf("Total arguments:%d\n",count);
	if (argc == 2)
	{
		printf("Filename:%s\n\n",storage);
		if (xfile == NULL )
		{
			printf("Can't open file\n");
		}
		else
		{
			while (fgets(line,MAX_LINE_LENGTH,xfile))
			{
				int n = atoi(line);
				
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
				{
					/*printf("Try again\n");*/
				}
			}
		}
		 
	}
	else if(argc > 2)
	{
		printf("Too much files\n");
	}
	else
	{
	       printf("ERROR: Please add a file\n");
	}
	return (0);
}

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
