#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>
int savelodeFile()
{
	FILE *a;
	int b = 0;

	a = fopen("File.fin", "r");
	fscanf(a, "%d", &b);

	if (b == 0) {
		printf("저장 없음\n");

		system("pause");
	}
	else if (b == 1) {
		printf("1번 저장\n");

		system("pause");
	}
	else if (b == 11) {
		printf("2번저장\n");

		system("pause");
	}
	else if (b == 111) {
		printf("3번 저장\n");

		system("pause");
	}
	else {
		printf("버그금지\n");

		system("pause");
	}
	return 0;
}
int main()
{
	int choose;
	printf("1.저장 \n2.세이브 파일 불러오기\n");
	scanf("%d",&choose);

	if (choose == 1) {
		FILE *a = 0;
		int b = 1;

		a = fopen("File.fin", "a");

		fprintf(a, "%d", b);
	}
	else if (choose == 2) {

		savelodeFile();
		exit(0);
	}
}