
#include <stdio.h>
main()
{
	int i, sum;
	sum = 0;
	for (i = 1; i <= 10; i++) {
		sum += i;
		printf("1 から %d までの和 = %d\n", i, sum);
	}
}

