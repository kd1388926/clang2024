#include <stdio.h>
main()
{
	char ia;
	printf("アルファベット");
	scanf("%c", &ia);
	if (ia >= 'a' &&  'z' >= ia) {
		printf("小文字です");
	}
	else {
		printf("大文字です");
	}
}