#include <stdio.h>
main()
{
	int ia, ib, ic;
	printf("0から100までの整数");
	scanf("%d", &ia);
	if (ia >= 90) {
		printf("判定結果は「５」です");
	}
	else {
		if (ia >= 80 || ia < 90) {
			printf("判定結果は「４」です");
		}
		else {
			if (ia >= 50 || ia < 80) {
				printf("判定結果は「３」です");
			}
			else {
				if (ia >= 30 || ia < 50)
					printf("判定結果は「２」です");
				else {
					printf("その他です");
				}
			}
		}
	}
	
}