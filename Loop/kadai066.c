#include <stdio.h>
main()
{
	int ia, ib;
	ia = 1;
	ib = 1;
	do {
		printf("%d ", ib);
		ia++;
		ib += ia;
	} while (ib <= 300);
}