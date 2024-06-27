#include <stdio.h>
main()
{
	int ia;
	ia = 1;
	while (ia <= 20) {
		printf("%d ", ia);
		ia++;
		if (ia % 11 == 0) {
			printf("\n");
		}
	}
}