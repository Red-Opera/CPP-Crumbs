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
		printf("���� ����\n");

		system("pause");
	}
	else if (b == 1) {
		printf("1�� ����\n");

		system("pause");
	}
	else if (b == 11) {
		printf("2������\n");

		system("pause");
	}
	else if (b == 111) {
		printf("3�� ����\n");

		system("pause");
	}
	else {
		printf("���ױ���\n");

		system("pause");
	}
	return 0;
}
int main()
{
	int choose;
	printf("1.���� \n2.���̺� ���� �ҷ�����\n");
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