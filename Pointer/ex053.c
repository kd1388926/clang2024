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
	printf("���s�O:*p_a=%d *p_b=%d\n", b, a);
	printf("���s��:*p_a=%d *p_b=%d", a, b);
}