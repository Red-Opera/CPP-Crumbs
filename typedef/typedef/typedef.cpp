#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>

int main()
{
	typedef float soft;

	soft a;
	printf("a�� ���� ���Ͻÿ�. : ");
	scanf("%f",&a);


	typedef int bit4;
	bit4 b;
	printf("b�� ���� ���Ͻÿ�. : ");
	scanf("%d",&b);

	printf("a�� ����? %f\n b�� ����? %d�Դϴ�.\n", a, b);

	system("pause");
}