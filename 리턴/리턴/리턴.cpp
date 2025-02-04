#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>

int a(int x, int y)
{
	return x + y;
}
int main()
{
	int z, z1, b;
	printf("더할 숫자를 적으시오. :");
	scanf("%d",&z);

	printf("더할 숫자를 적으시오. :");
	scanf("%d", &z1);
	
		b = a(z , z1);
		printf("더한값은? %d\n", b);

		system("pause");

		return 0;

}