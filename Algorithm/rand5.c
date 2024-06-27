#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int A;
	srand(time(0));
	rand();
	A = rand() % 300 + 1;
	for (A = 0; A <= 100; A++) {
		printf("%d\n", rand() % 300 + 1);
	}
}