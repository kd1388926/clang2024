#include <stdio.h>
main()
{
	int ia, ib, ic;
	ib = 0;
	ic = 0;
	while (1) {
	printf("����(-999�ŏI��)");
	scanf("%d", &ia);
	
		if (ia == -999) {
			break;
		}
			ic++;
			ib += ia;
	}
	printf("���v=%d\n����=%f", ib, (float)ib / ic);
}