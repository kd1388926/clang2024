#include <stdio.h>
main()
{
	int a, b;
	printf("�������Ă�������");
	scanf("%d", &b);
	a = 0;
	while (a < 10) {
		printf("%d+%d=%d\n", a, b, a + b);
		a++;
	}
}