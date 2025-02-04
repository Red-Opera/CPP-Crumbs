#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	FILE *a;
	int b = 1;

	a = fopen("input.inpu", "a");

	fprintf(a, "%d", b);
}