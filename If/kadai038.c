#include <stdio.h>
main()
{
	char ia, ib;
	printf("�ꕶ�����́F");
	scanf("%c", &ia);
	if (ia >= 'a' && ia <= 'z') {
		printf("�ϊ����ʂ�%c�ł�\n", ia - 32);
	}
	else {
		if (ia >= 'A' && ia <= 'Z') {
			printf("�ϊ����ʂ�%c�ł�", ia + 32);
		}
	}
}