#include <stdio.h>
main()
{
	int a = 50, b = 10, c;
	int* p_a, * p_b;
	p_a = &a;
	p_b = &b;
	c = a + b;
	printf("%d+%d=%d", a, b, c);
}