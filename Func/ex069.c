#include <stdio.h>
main()
{
	int a, b, c; 
	b = c = 0;
	printf("®”:");
	while (scanf("%d", &a) != EOF){
		b += a;
		c++;
		printf("®”:");
	}
	printf("goukei=%d heeikin=%f", b, (float)b / c);
}