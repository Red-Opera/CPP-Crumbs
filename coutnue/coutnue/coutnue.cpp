#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	int a;

	cout << "100번째중 몇번째를 건너 뛰겠습니까?";

	cin >> a;
	for (int i = 0; i <= 200; i++) {
		if (a == i) {
			continue;
		}
		cout << i << "번째 돌았습니다.\n";
	}

	system("pause");
}