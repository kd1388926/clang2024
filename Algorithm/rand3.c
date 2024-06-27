#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int dice;
	srand(time(0));
	rand();
	dice = rand() % 100 + 1;
	printf("出目は%d！\n", dice);
	if (dice < 10) {
		printf("会心の一撃！");
	}
	else {
		if(dice>90)
		printf("通常攻撃！");
		else {
			if (dice > 90) {
				printf("攻撃失敗");
			}
		}
	}
}
