#include <stdio.h>
main()
{
	char* p_ride[3] = { "car","bus","shinkansen" };
	char i;
	for (i = 0; i < 3; i++) {
		printf("%s\n", p_ride[i]);
	}
}