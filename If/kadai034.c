#include <stdio.h>
main()
{
	char ia;
	printf("�A���t�@�x�b�g");
	scanf("%c", &ia);
	if (ia >= 'a' && 'z' >= ia) {
		printf("�������ł�");
	}
	else {
		if(ia >= 'A' && 'Z' >= ia)
		printf("�啶���ł�");
		else {
			printf("error");
		}
	}
}