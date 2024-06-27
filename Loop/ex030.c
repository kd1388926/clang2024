#include <stdio.h>
main()
{
	int a, b;
	printf("”‚ğ“ü‚ê‚Ä‚­‚¾‚³‚¢");
	scanf("%d", &b);
	a = 0;
	while (a < 10) {
		printf("%d+%d=%d\n", a, b, a + b);
		a++;
	}
}