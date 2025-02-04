#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	printf("문자를 입력하시오. : ");
	char x[9999];
	scanf("%s", &x);


	printf("문자의 길이는 %d 입니다.(한글은 나누기2)\n", strlen(x));

	system("pause");
}