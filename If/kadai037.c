#include <stdio.h>
main()
{
	int ia, ib, ic;
	printf("0����100�܂ł̐���");
	scanf("%d", &ia);
	if (ia >= 90) {
		printf("���茋�ʂ́u�T�v�ł�");
	}
	else {
		if (ia >= 80 || ia < 90) {
			printf("���茋�ʂ́u�S�v�ł�");
		}
		else {
			if (ia >= 50 || ia < 80) {
				printf("���茋�ʂ́u�R�v�ł�");
			}
			else {
				if (ia >= 30 || ia < 50)
					printf("���茋�ʂ́u�Q�v�ł�");
				else {
					printf("���̑��ł�");
				}
			}
		}
	}
	
}