#include <stdio.h>
main() 
{
	int ia, ib, ic;
	printf("®”");
	scanf("%d", &ia);
	printf("®”‚Q");
	scanf("%d", &ib);
	ic = ia - ib;
	if (ia > ib) {
		printf("%d‚Ì•û‚ª%d‚æ‚è%d‘å‚«‚¢", ia, ib, ic);
	}
	else {
		printf("%d‚Ì•û‚ª%d‚æ‚è%d‘å‚«‚¢", ib, ia, ic);
	}
}