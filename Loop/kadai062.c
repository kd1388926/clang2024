#include <stdio.h>
main()
{
	int ia, ib;
	ia = 20;
	do {
		printf("%d ", ia);
		ia--;
		if (ia == 10) {
			printf("\n");
		}
	} while (ia >= 1);
}