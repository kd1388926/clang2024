#include <stdio.h>
main()
{
	int ia, ib;
	ib = 0;
	printf("整数(-999で終了)：");
	scanf("%d", &ia);
	while(ia != -999) {
		ib += ia;
		printf("整数(-999で終了)：");
		scanf("%d", &ia);	
	}
	printf("合計 = %d 平均=%.3f\n", ib, (float)(ib / 3));
}