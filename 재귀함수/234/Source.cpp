#include <stdlib.h>
#include <stdio.h>

int a(int x) {
	if (x == 1) return 1;
	x * a(x - 1);


	printf("x�� ���� %d�Դϴ�.\n",x);

}

int main() {
	a(56);
	system("pause");
}