#include <stdio.h>

int divison(int a)
{
	int d;
	
	d = a / 2;
	return (d);
}	

void main()
{
    int n;
    
    printf("Enter a number\n");
    scanf("%d",&n);

    int *a = &n; /*value entered*/
    
    printf("%d = %d * 2",n ,divison(*a));

    printf("\n");
}
