#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a[2][2] = { 0 };

	printf("a狼 林家篮? %d\n", a+1);  // +4        林家
	printf("a狼 林家+1篮? %d\n", *a+1); // +0        林家 *a = a[0] = &a[0][0]
	printf("a狼 蔼+1篮? %d\n", &a+1); // +12        林家

	printf("a+1绰? %d\n", a[0]+1); // +0
	printf("a+1绰? %d\n", *a[0]+1); // +1        蔼
	printf("a+1绰? %d\n", &a[0]+1); // +4        林家        &a[0] = a

	printf("a+1绰? %d\n", a[0][0]+1); // +1        蔼

	system("pause");
}