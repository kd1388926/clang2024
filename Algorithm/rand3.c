#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int dice;
	srand(time(0));
	rand();
	dice = rand() % 100 + 1;
	printf("�o�ڂ�%d�I\n", dice);
	if (dice < 10) {
		printf("��S�̈ꌂ�I");
	}
	else {
		if(dice>90)
		printf("�ʏ�U���I");
		else {
			if (dice > 90) {
				printf("�U�����s");
			}
		}
	}
}
