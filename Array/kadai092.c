#include <stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };  // [0]�`[9]�܂Ŏg����
	int c[10];
	int i;


	printf("�z��a����z�񂃂ɂ��R�s�[\n");

	for (i = 0; i < 10; i++) {
	c[i] = a[i];

	}


	printf("�z��");
	for (i = 0; i < 10; i++) {

		printf("%d ", a[i]);
	}
	printf("\n�z��");
	for (i = 0; i < 10; i++) {

		printf("%d ", c[i]);
	}

}