#include <stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };  // [0]�`[9]�܂Ŏg����
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int c[10];
	int i, j, p;
	p = 0;
	
	printf("�z��a=");
	for (i = 0 ; i < 10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n�z��b=");
	for (j = 0; j < 10; j++) {
		printf("%d ", b[j]);
	}
	for (i = 0, j = 0; i < 10, j < 10; j++, i++,p++) {
		c[p] = a[i] + b[j];
	}
	printf("\n�z��c=");
	for (p = 0; p < 10; p++) {
		printf("%d ", c[p]);
	}
}