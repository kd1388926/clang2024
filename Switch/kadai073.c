#include <stdio.h>
main()
{
	int ia;
	char ib;
	printf("�����H:");
	scanf("%d", &ia);
	printf("o=8�i�� x=16�i�� d=10�i��\n");
	printf("�A���t�@�x�b�g(o or x or d):");
	scanf("%*c%c", &ib);
	switch (ib)
	{
	case'o':
		printf("%o", ia);
		break;

	case'x':
		printf("%x", ia);
		break;

	case'd':
		printf("%d", ia);
		break;
	}
}