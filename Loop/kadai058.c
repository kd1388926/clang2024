#include <stdio.h>
main()
{
	int ia, ic;
	char ib;
	ic = 1;
	for (ia = 32, ib = 32; ia >= 32 && ia <= 126, ib >= 32 && ib <= 126; ia++, ib++,ic++) {
		printf("%x %c", ia, ib);
		if (ic % 10 == 0) {
			printf("\n");
		}
	}
}