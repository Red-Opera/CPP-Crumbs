#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>

int main()
{
	FILE *a;
	int b = 0;

	a = fopen("input.inpu","r");
	fscanf(a, "%d", b);

	if (b == 1) {
		printf("1�� ����");

		system("pause");
	}
	else if (b == 11) {
		printf("2������");

		system("pause");
	}
	else if (b == 111) {
		printf("3�� ����");

		system("payse");
	}
	else {
		printf("���ױ���");

		system("pause");
	}

}