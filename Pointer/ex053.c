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
	printf("実行前:*p_a=%d *p_b=%d\n", b, a);
	printf("実行後:*p_a=%d *p_b=%d", a, b);
}