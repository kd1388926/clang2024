#include <stdio.h>
main()
{
	int ia, ib, ic;
	ib = 0;
	do {
		printf("����(-999�ŏI��");
		scanf("%d", &ia);
		ib += ia;
		ic++;
	} while (ia != -999);
	printf("���v=%d ����=%f", ib, (float)ib / ic);
}