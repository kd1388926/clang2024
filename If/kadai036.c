#include <stdio.h>
main() 
{
	int ia, ib, ic;
	printf("整数");
	scanf("%d", &ia);
	printf("整数２");
	scanf("%d", &ib);
	ic = ia - ib;
	if (ia > ib) {
		printf("%dの方が%dより%d大きい", ia, ib, ic);
	}
	else {
		printf("%dの方が%dより%d大きい", ib, ia, ic);
	}
}