#include <stdio.h>
main()
{
	int ia;
	ia = 20;
	while (ia >= 1) {
		printf("%d ", ia);
		ia--;
		if (ia % 10 == 0) {
			printf("\n");
		}
	}
}