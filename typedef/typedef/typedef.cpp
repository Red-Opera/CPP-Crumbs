#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>

int main()
{
	typedef float soft;

	soft a;
	printf("a의 값을 정하시오. : ");
	scanf("%f",&a);


	typedef int bit4;
	bit4 b;
	printf("b의 값을 정하시오. : ");
	scanf("%d",&b);

	printf("a의 값은? %f\n b의 값은? %d입니다.\n", a, b);

	system("pause");
}