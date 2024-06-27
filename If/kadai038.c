#include <stdio.h>
main()
{
	char ia, ib;
	printf("ˆê•¶Žš“ü—ÍF");
	scanf("%c", &ia);
	if (ia >= 'a' && ia <= 'z') {
		printf("•ÏŠ·Œ‹‰Ê‚Í%c‚Å‚·\n", ia - 32);
	}
	else {
		if (ia >= 'A' && ia <= 'Z') {
			printf("•ÏŠ·Œ‹‰Ê‚Í%c‚Å‚·", ia + 32);
		}
	}
}