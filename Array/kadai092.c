#include <stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };  // [0]～[9]まで使える
	int c[10];
	int i;


	printf("配列aから配列ｃにこコピー\n");

	for (i = 0; i < 10; i++) {
	c[i] = a[i];

	}


	printf("配列＝");
	for (i = 0; i < 10; i++) {

		printf("%d ", a[i]);
	}
	printf("\n配列＝");
	for (i = 0; i < 10; i++) {

		printf("%d ", c[i]);
	}

}