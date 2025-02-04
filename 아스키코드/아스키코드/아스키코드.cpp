#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>

int main() {
	int x;
	printf("문자로 바꿀 숫자를 적으시오. :");
		scanf("%d", &x);
	printf("\n%d을(를) 문자로 바꾸면 %c 입니다.\n", x, x);

	system("pause");

	return 0;
}