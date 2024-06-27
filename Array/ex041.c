#include <stdio.h>
main()
{
	float box[3], sum;
	int i;
	for (sum=0 , i = 0; i < 3; i++) {
		printf("ŽÀ”‚ð“ü—Í:");
		scanf("%f", & box[i]);
		sum += box[i];
	}
	printf("goke=%.2f hei=%.2f", sum, sum / 3);
}