#include <stdio.h>

int main(int argc, char *argv[])
{
	(void) argv;
	if (argc == 2)
	{
		printf("Filename:%s\n",argv[1]);
	}
	else
	{
	       printf("ERROR: Please add a file\n");
	}
	return (0);
}
