#include <stdio.h>
main()
{
	int a[6] = { 11,22,33,44,55,66 };
int* p_a;
float b[4] = { 11.1,22.2,33.3,44.4 };
float* p_b;
int c, e;
float d, f;
p_a = a;
p_b = b;


for (e = 0, c = 0; c < 6; c++) {
	e += *p_a;
	p_a++;
}
printf("配列a　合計＝%d 平均＝%.3f\n", e, (float)e / 6);


for (f = 0, d = 0; d < 4; d++) {
	f += *p_b;
	p_b++;
}
printf("配列b　合計＝%.3f 平均＝%.3f\n", f, f / 4);


}
