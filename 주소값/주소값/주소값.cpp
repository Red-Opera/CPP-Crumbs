#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	int x[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	printf("x�� ���� %d\n", x[0]);
	printf("x�� �ּҴ�? %d\n",&x);
	printf("x+1�� ����? %d\n", *(x + 1));
	printf("x+1�� �ּҴ�? %d\n", x + 1);
	system("pause");

}