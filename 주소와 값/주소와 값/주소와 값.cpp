#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a[2][2] = { 0 };

	printf("a�� �ּ���? %d\n", a+1);  // +4        �ּ�
	printf("a�� �ּ�+1��? %d\n", *a+1); // +0        �ּ� *a = a[0] = &a[0][0]
	printf("a�� ��+1��? %d\n", &a+1); // +12        �ּ�

	printf("a+1��? %d\n", a[0]+1); // +0
	printf("a+1��? %d\n", *a[0]+1); // +1        ��
	printf("a+1��? %d\n", &a[0]+1); // +4        �ּ�        &a[0] = a

	printf("a+1��? %d\n", a[0][0]+1); // +1        ��

	system("pause");
}