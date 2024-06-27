#include <stdio.h>
main()
{
	int ia;
	printf("整数を入力(-999)で終了");
	scanf("%d", &ia);
	while (ia != -999) {
		printf("８進数=%o 16進数=%x\n", ia, ia);
		printf("文字コード(-999)で終了");
		scanf("%d", &ia);
	}
}