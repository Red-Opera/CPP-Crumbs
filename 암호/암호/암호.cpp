#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
home:
	printf("암호를 적으시오. :");
	char a[] = "Redkey";
	char b[999];
	scanf("%s",b);
	
	int x = strcmp(a,b);
	
	if (x == 0) {
		printf("암호를 풀었습니다.\n");
		goto Exit;
	}
	else {
		printf("암호가 틀렸습니다.\n");
		goto home;
	}
Exit:
	system("pause");
}