#include <stdio.h>
int add(int, int, int); /* �v���g�^�C�v�錾 */
float heikin(int, int, int);
main()
{
	int a, b, c;
	printf("������3����:");
	scanf("%d%d%d", &a, &b, &c);

	printf("���v��%d�A���ς�%.2f\n", add(a, b, c), (float)heikin(a, b, c));
}
/* �֐�add�̋L�q */
int add(int a, int b, int c)
{
	return (a+b+c);
}
float heikin(int a, int b, int c) {
	return(float)add(a, b, c) / 3;
}