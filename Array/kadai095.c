#include <stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };  // [0]Å`[9]Ç‹Ç≈égÇ¶ÇÈ
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int i, ib, ic, j;
	ib = 0;
	ic = 0;
	for (i = 0; i < 10; i++) {
		ib += a[i];
	}
	printf("%d\n", ib);
	for (j = 0; j < 10; j++) {
		ic += b[j];
	}
	printf("%d", ic);
}