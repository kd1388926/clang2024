#include <stdio.h>
main()
{
	int a = 100, b = 200, c;
	int* p_a, * p_b;
	p_a = &a;
	p_b = &b;
	c = a;
	a = b;
	b = c;
	printf("���s�O:a=%d b=%d\n", b, a);
	printf("���s��:a=%d b=%d", a, b);
}