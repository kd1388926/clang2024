#include <stdio.h>
main()
{
	char ia;
	int i;
	printf("アルファベット小文字？");
	scanf("%c", &ia);
	for (i = 0; ia + i <= 'Z'; i++)
	{
		printf("%c ", ia + i);
	}
}