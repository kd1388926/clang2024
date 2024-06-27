#include <stdio.h>
main()
{
	int date[10]={ 10,20,30,40,50,60,70,80,-999 };
	int* p_date;
	int a;
	p_date = date;
	for (a = 0; a != -999; a++) {
		a = *p_date;
		p_date++;
	}
		printf("ポインタを固定で表示\n配列　date[]=%d\n", a);
}