#include <stdio.h>
main()
{
	int ia = 0;
	while (ia != -1) {
		printf("文字コード(-1)で終了");
		scanf("%d", &ia);
		printf("%c\n", ia);
	}
}