#include <stdio.h>
main()
{
	int a, b, c;
	printf("������́F");
	scanf("%d", &b);
	for (c = 0, a = 0; b != -999; a++) {
		c += b;
		printf("���́H");
		scanf("%d", &b);
	}
	printf("���v��%d \t ����=%.2f\n", c, (float)c / a);
}
