#include <stdio.h>
main()
{
	int ia;
	printf("���������(-999)�ŏI��");
	scanf("%d", &ia);
	while (ia != -999) {
		printf("�W�i��=%o 16�i��=%x\n", ia, ia);
		printf("�����R�[�h(-999)�ŏI��");
		scanf("%d", &ia);
	}
}