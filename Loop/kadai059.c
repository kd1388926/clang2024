#include <stdio.h>
main()
{
	int ia, ib;
	printf("    ");
	for (ia = 1; ia <= 9; ia++) {
		printf("%3d", ia );
	}
	printf("\n=================================\n");
		
	for (ia = 1; ia <= 9; ia++) {
		printf("%3d|", ia);

		for (ib = 1; ib <= 9; ib++) {
				printf("%3d", ia * ib);
		}
			printf("\n");
	}


}