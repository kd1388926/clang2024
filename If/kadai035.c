#include <stdio.h>
main()
{
	int ia;
	printf("整数？");
	scanf("%d", &ia);
	if (ia <= -1) {
		printf("マイナスです");
	}
	else {
		if (ia >= 1) {
			printf("プラスです");
		}
	}
}