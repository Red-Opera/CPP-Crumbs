#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	int a;

	cout << "100��°�� ���°�� �ǳ� �ٰڽ��ϱ�?";

	cin >> a;
	for (int i = 0; i <= 200; i++) {
		if (a == i) {
			continue;
		}
		cout << i << "��° ���ҽ��ϴ�.\n";
	}

	system("pause");
}