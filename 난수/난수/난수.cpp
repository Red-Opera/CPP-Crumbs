#pragma warning(disable:4996)
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int sum = 0;

int main()
{
	srand(time(NULL));

	for (int a = 1; a <= 100; a++) {
		int q = rand() % 10 + 1;

		if (q == 1) {
			printf("失因 せせせせせせせせ\n");
			sum++;
		}
		else {
			printf("叔鳶\n");
		}
	}
	printf("失因 判呪澗 %d  脊艦陥.\n", sum);
	system("pause");
}