#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

#define app 1

enum numpace {
	choose1,
	choose2,
	choose3,
	choose4,
	choose5,
	choose6,
	choose7
};

int main()
{
	int a;
	a = app;

	printf("a�� ����? %d\n", a);
	printf("app�� ����? %d\n", app);

	if (enum numpace <= 4) {

	}
	printf("choose�� ����? %d\n", choose1);
	printf("choose�� ����? %d\n", choose2);
	printf("choose�� ����? %d\n", choose3);
	printf("choose�� ����? %d\n", choose4);
	printf("choose�� ����? %d\n", choose5);
	printf("choose�� ����? %d\n", choose6);
	printf("choose�� ����? %d\n", choose7);

	system("pause");

}