#include <stdio.h>
main()
{
	int ia, ib;
	ib = 0;
	printf("����(-999�ŏI��)�F");
	scanf("%d", &ia);
	while(ia != -999) {
		ib += ia;
		printf("����(-999�ŏI��)�F");
		scanf("%d", &ia);	
	}
	printf("���v = %d ����=%.3f\n", ib, (float)(ib / 3));
}