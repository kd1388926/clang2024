#include <stdio.h>
main()
{
	int ia, ib, ic;
	char id;
	printf("®”1:");
	scanf("%d", &ia);
	printf("®”2:");
	scanf("%d", &ib);
	
	printf("‰‰Zq");
	scanf("%*c%c", &id);
	switch (id)
	{
	case '+':
		printf("%d%c%d=%d", ia, id, ib, ia + ib);
		break;

	case '-':
		printf("%d%c%d=%d", ia, id, ib, ia - ib);
		break;

	case '*':
		printf("%d%c%d=%d", ia, id, ib, ia * ib);
		break;

	case '/':
		printf("%d%c%d=%d ‚ ‚Ü‚è=%d", ia, id, ib, ia / ib, ia % ib);
		break;
	}
}