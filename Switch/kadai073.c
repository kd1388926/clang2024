#include <stdio.h>
main()
{
	int ia;
	char ib;
	printf("整数？:");
	scanf("%d", &ia);
	printf("o=8進数 x=16進数 d=10進数\n");
	printf("アルファベット(o or x or d):");
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