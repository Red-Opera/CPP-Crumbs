#pragma warning(disable:4996)
#include  <stdlib.h>
#include <stdio.h>

int main()
{
	int x;
	printf("�ݺ��� ���� �����ÿ� :");
	scanf("%d", &x);

	for (int a = 1; a <= x; a++) {
		printf("a = %d\n", a);
		for (int i = 1; i <= x; i++) {
			printf("i = %d\n", i);
			for (int b = 1; b <= x; b++) {
				printf("b = %d\n", b);
			    }
			}
		}
	system("pause");
}