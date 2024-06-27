#include <stdio.h>
int add(int, int, int); /* プロトタイプ宣言 */
float heikin(int, int, int);
main()
{
	int a, b, c;
	printf("整数を3つ入力:");
	scanf("%d%d%d", &a, &b, &c);

	printf("合計は%d、平均は%.2f\n", add(a, b, c), (float)heikin(a, b, c));
}
/* 関数addの記述 */
int add(int a, int b, int c)
{
	return (a+b+c);
}
float heikin(int a, int b, int c) {
	return(float)add(a, b, c) / 3;
}