#include <stdio.h>
#include <stdlib.h>
main()
{
	int score = 0, max_score = 0;
	char name[256], ch, max_name[20];
	FILE* fp;
	fp = fopen("score. txt", "w");
	fscanf(fp, "%s%d", max_name, &max_score);
	printf("���Ȃ��̖��O��? \n");
	scanf("%s", name);
		while (1) {
			printf("����(e�ŏI��):\n");

			ch = getch();

			if (ch == 'e') { break; }

			score++;
		}
		if (score > max_score) {
			fp = fopen("score. txt", "w");
			fprintf(fp, "%s\n%d\n", name, score); 
			fclose(fp);
			printf("�n�C�X�R�A�X�V!!");
		}


}


