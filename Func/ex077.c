#include  <stdio.h>
void hantei(int n1, int n2, int n3, int* max, int* min);
main()
{
	int a, b, c, max, min;
	printf("整数を三つ入力：");
	scanf("%d%d%d", &a, &b, &c);
	hantei(a, b, c, &max, &min);
	printf("最大値=%d 最低値=%d", max, min);
}
void hantei(int n1, int n2, int n3, int* max, int* min) {
	*max = n1;
	if (n2 > *max) { *max = n2; }
	if (n3 > *max) { *max = n3; }
	*min = n1;
	if (n2 > *min) { *min = n2; }
	if (n3 > *min) { *min = n3; }
}



