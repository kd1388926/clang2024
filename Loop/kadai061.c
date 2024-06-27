#include <stdio.h>
main()
{
	int ia, ib;
	ia = 1;
	do {
		printf("%d ", ia);
		ia++;
		if (ia == 11) {
			printf("\n");
		}
	} while (ia <= 20);
}