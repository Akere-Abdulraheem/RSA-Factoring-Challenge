#include <stdio.h>
#define MAX_LINE_LENGTH 1000
int main(void)
{
	FILE *xfile;
	char line [MAX_LINE_LENGTH];

	xfile = fopen("file", "r");
	if (xfile == NULL ){}
	else
	{
		while(fgets(line,MAX_LINE_LENGTH,xfile))
		{
			printf(line);
		}
	}
	fclose(xfile);
	return 0;
}
