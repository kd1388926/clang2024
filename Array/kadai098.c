#include <stdio.h>
main()
{
	int data[10] = { 10,5,23,29,2,6,3,1,70,100 };
	int max, min;
	int i;
	max = 0;
	min = 99999;
	printf("配列 data ");
	for (i = 0; i < 10; i++) {
		printf("%d ", data[i]);
	}
	for (i = 0; i < 10; i++) {
		if (data[i] > max) {
			max = data[i];
		}
		if (data[i] < min) {
			min = data[i];
		}
	}
	printf("\n最大値=%d 最小値=%d", max, min);
}