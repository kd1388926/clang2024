#include <stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };  // [0]`[9]ÜÅg¦é
	int c[10];
	int i;


	printf("zña©çzñÉ±Rs[\n");

	for (i = 0; i < 10; i++) {
	c[i] = a[i];

	}


	printf("zñ");
	for (i = 0; i < 10; i++) {

		printf("%d ", a[i]);
	}
	printf("\nzñ");
	for (i = 0; i < 10; i++) {

		printf("%d ", c[i]);
	}

}