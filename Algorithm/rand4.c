#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int dice, dice2;
	printf("�����̂��Ȃ��̉^����");
	srand(time(0));
	rand();
	dice = rand() % 5+1;
	for (dice2 = 0; dice2 < dice; dice2++) {
		printf("��");
	}
	printf("�ł�\n");
}