#include <stdlib.h>
#include <iostream>
using namespace std;

int main(int a)
{
	int i = 0;

	cout << "반복할 값을 정하시오.";

	cin >> a;

	do {
		cout << i << "번째 반복 했습니다.\n";
		i++;
	} while (i <= a);
	system("pause");
}