#include <stdio.h>
main()
{
	char ia;
	printf("アルファベット:");
	scanf("%c", &ia);
	switch (ia)
	{
	case'a':
		printf("America\nAustralia");
		break;

	case'e':
		printf("England");
		break;

	case'f':
		printf("France");
		break;

	case'j':
		printf("Japan");
		break;
	}
}