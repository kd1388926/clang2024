#include <stdio.h>
main()
{
	int i;
	i = 0;
	for (;;) {
	i++;
	if (i % 2 == 0) {
			continue;
		}
		if (i > 20) {
				break;
			}
			printf("%d ", i);
	
	}
}