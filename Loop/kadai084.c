#include <stdio.h>
main()
{
	int ia, ib, ic, ie, ig;

	while (1) {

		printf("����1(-999�ŏI��)");
		scanf("%d", &ia);
		if (ia == -999) {
			break;
		}
		printf("����2(-999�ŏI��)");
		scanf("%d", &ib);

		if (ia == -999) {
			break;
		}
				if (ib == -999) {
					break;
				}
		if (ia == 0) {
			continue;
		}
				if (ib == 0) {
					continue;
				}

		printf("%d/%d=%d ���܂�=%d\n", ia, ib, ia / ib, ia % ib);
	}

}