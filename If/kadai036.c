#include <stdio.h>
main() 
{
	int ia, ib, ic;
	printf("����");
	scanf("%d", &ia);
	printf("�����Q");
	scanf("%d", &ib);
	ic = ia - ib;
	if (ia > ib) {
		printf("%d�̕���%d���%d�傫��", ia, ib, ic);
	}
	else {
		printf("%d�̕���%d���%d�傫��", ib, ia, ic);
	}
}