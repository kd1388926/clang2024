#include <stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };  // [0]�`[9]�܂Ŏg����
	int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
	int i[10];
	int  j;
	for (j = 0; j < 10; j++)
	{
		i[j] = a[j];
		a[j] = b[j];
		b[j] = i[j];
	}
	printf("�z��a=");
	for (j = 0; j < 10; j++) {
		printf("%d ", a[j]);	}
	printf("\n�z��b=");
	for (j = 0; j < 10; j++) {
		printf("%d ", b[j]);
	}
}