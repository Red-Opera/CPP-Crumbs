#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>


int main() {
	float x, y;

	scanf("%f%f", &x, &y);

	float a = x + y;
	float b = x - y;
	float c = x * y;
	float d = x / y;

	printf("%f + %f = %f\n", x, y, a);
	printf("%f - %f = %f\n", x, y, b);
	printf("%f * %f = %f\n", x, y, c);
	printf("%f / %f = %f\n", x, y, d);
	system("pause");
		return 0;
}