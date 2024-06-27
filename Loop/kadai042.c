#include <stdio.h>
main()
{
	int ia, ib;
	ia = 1;
	ib = 1;
	while (ib<=  300) {
		printf("%d\n", ib );
		ia++;
		ib += ia;
	}	
}