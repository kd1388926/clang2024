#include <stdio.h>
main()
{
	int i, bai;
	printf("数を入力：");
	scanf("%d", &bai);
	for (i = 1; i <= 5; i++) {
		printf("%d\n", i*bai);
	}
}
