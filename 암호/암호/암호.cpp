#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
home:
	printf("��ȣ�� �����ÿ�. :");
	char a[] = "Redkey";
	char b[999];
	scanf("%s",b);
	
	int x = strcmp(a,b);
	
	if (x == 0) {
		printf("��ȣ�� Ǯ�����ϴ�.\n");
		goto Exit;
	}
	else {
		printf("��ȣ�� Ʋ�Ƚ��ϴ�.\n");
		goto home;
	}
Exit:
	system("pause");
}