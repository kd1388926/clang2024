#include <stdio.h>
main()
{
	double ia, ib;
	printf("２つ実数値");
	scanf("%lf%lf", &ia, &ib);
	if (ia < ib) {
		printf("大きいほうは=%.2f", ib);
	}

	else {
		printf("大きいほうは=%.2f", ia);
	 }

		
}