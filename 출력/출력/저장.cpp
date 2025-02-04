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
		printf("1번 저장");

		system("pause");
	}
	else if (b == 11) {
		printf("2번저장");

		system("pause");
	}
	else if (b == 111) {
		printf("3번 저장");

		system("payse");
	}
	else {
		printf("버그금지");

		system("pause");
	}

}