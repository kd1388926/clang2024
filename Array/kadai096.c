#include <stdio.h>
main()
{
	int i, j;
	int c[10];	
	for (i = 0; i < 10; i++) {
		printf("�����H(-999�ŏI��)");
		scanf("%d", &c[i]);
		if (c[i]==-999) {
			break;
		}
	}
	for (j = 0; j < i; j++) {
		printf("%d ", c[j]);
	}
}