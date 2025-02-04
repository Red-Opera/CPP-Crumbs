#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>
#include <winerror.h>

int main()
{
	int q = 0;
	FILE *a;
	a = fopen("隔奄.txt", "r");

	fscanf(a, "%d", &q);

	if (q == 1) {
		for (int a = 0; a < 3000; a++) {
			printf("馬馬馬馬馬馬馬馬馬馬馬馬");
		}
	}
	system("pause");
}