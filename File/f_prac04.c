#include <stdio.h>
#define sol_num 3
typedef struct
{
	char wname[20];
	int bullet;
	float atk;
}wepon;
typedef struct
{
	char name[20];
	int hp;
	wepon wpn;
}soldier;
void Setinfo(soldier* s, char* filename);
void Display(soldier *s);
main()
{
	soldier sol[sol_num];
	Setinfo(sol, "file04.txt");
	Display(sol);
}
void Setinfo(soldier* s, char* filename) {
	FILE* fp;
	int i;
	if (fp = fopen(filename, "r")) {
	
		for (i = 0; i < sol_num; i++) {
			fscanf(fp, "%s%d%s%d%f", (s+i)->name, &(s + i)->hp, (s + i)->wpn.wname, &(s + i)->wpn.bullet, &(s + i)->wpn.atk);
		}
		fclose(fp);
	}
	else {
		printf("ファイルが読み込めません\n");
	}
}
void Display(soldier* s) {
	int i;
	for (i = 0; i < sol_num; i++) {		
		printf("名前：%s 体力：%d\n", (s+i)->name, (s+i)->hp);
		printf("武器:%s 散弾数:%d 攻撃力:%.2f", (s+i)->wpn.wname, (s+i)->wpn.bullet, (s+i)->wpn.atk);

	}


}