#include <stdio.h>
main()
{
	int i;
	int i1;
	char j[100];
	char i2;
	printf("回数と文字列を入力");
	scanf("%d", &i);
	scanf("%s", &j);

	printf("%d ", i);
	for (i2 = 0; i2 < i; i2++) {
		printf("%s", j);
	}

}