#include <stdio.h>
main()
{
	char ia, ib;
	printf("一文字入力：");
	scanf("%c", &ia);
	if (ia >= 'a' && ia <= 'z') {
		printf("変換結果は%cです\n", ia - 32);
	}
	else {
		if (ia >= 'A' && ia <= 'Z') {
			printf("変換結果は%cです", ia + 32);
		}
	}
}