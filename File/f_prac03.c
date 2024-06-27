#include <stdio.h>

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
void Display(soldier s);
main()
{
	soldier sol;
	Setinfo(&sol, "file03.txt");
	Display(sol);
}
void Setinfo(soldier* s, char* filename) {
	FILE* fp;
	if (fp = fopen(filename,"r")) {
		fscanf(fp, "%s%d%s%d%f", s->name, &s->hp, s->wpn.wname, &s->wpn.bullet, &s->wpn.atk);
	}
	else {
		printf(" t @ C     ??  ??   \n");
	}
}
void Display(soldier s) {
	printf("   O F%s  ??F%d\n", s.name, s.hp);
	printf("    :%s  U e  :%d  U    :%.2f", s.wpn.wname, s.wpn.bullet, s.wpn.atk);

}