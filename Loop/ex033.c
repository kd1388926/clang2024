#include <stdio.h>
main()
{
	int a, b, c;
	printf("数を入力：");
	scanf("%d", &b);
	for (c = 0, a = 0; b != -999; a++) {
		c += b;
		printf("数は？");
		scanf("%d", &b);
	}
	printf("合計＝%d \t 平均=%.2f\n", c, (float)c / a);
}
