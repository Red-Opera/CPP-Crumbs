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
	printf("���� ���ڸ� �����ÿ�. :");
	scanf("%d",&z);

	printf("���� ���ڸ� �����ÿ�. :");
	scanf("%d", &z1);
	
		b = a(z , z1);
		printf("���Ѱ���? %d\n", b);

		system("pause");

		return 0;

}