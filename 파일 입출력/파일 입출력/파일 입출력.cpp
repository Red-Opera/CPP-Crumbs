#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>

int main()
{
	int q = 0;
	FILE *a;
	a = fopen("³Ö±â.txt","a");

	scanf("%d",&q);
	fprintf(a, "%d", q);

	system("pause");
}