#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	printf("���ڸ� �Է��Ͻÿ�. : ");
	char x[9999];
	scanf("%s", &x);


	printf("������ ���̴� %d �Դϴ�.(�ѱ��� ������2)\n", strlen(x));

	system("pause");
}