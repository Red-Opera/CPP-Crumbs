#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int x, y;
	int a[500][500] = {0};

	scanf("%d%d", &x, &y);

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	int q = 0, w = 0;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			q += a[i][j];
		}
	}
		printf("a의 변수의 합은? %d\n", q);
	system("pause");
}