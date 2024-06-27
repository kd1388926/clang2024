#include <stdio.h>
main()
{
	int ia, ib, ic;
	printf("0‚©‚ç100‚Ü‚Å‚Ì®”");
	scanf("%d", &ia);
	if (ia >= 90) {
		printf("”»’èŒ‹‰Ê‚Íu‚Tv‚Å‚·");
	}
	else {
		if (ia >= 80 || ia < 90) {
			printf("”»’èŒ‹‰Ê‚Íu‚Sv‚Å‚·");
		}
		else {
			if (ia >= 50 || ia < 80) {
				printf("”»’èŒ‹‰Ê‚Íu‚Rv‚Å‚·");
			}
			else {
				if (ia >= 30 || ia < 50)
					printf("”»’èŒ‹‰Ê‚Íu‚Qv‚Å‚·");
				else {
					printf("‚»‚Ì‘¼‚Å‚·");
				}
			}
		}
	}
	
}