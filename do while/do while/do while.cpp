#include <stdlib.h>
#include <iostream>
using namespace std;

int main(int a)
{
	int i = 0;

	cout << "�ݺ��� ���� ���Ͻÿ�.";

	cin >> a;

	do {
		cout << i << "��° �ݺ� �߽��ϴ�.\n";
		i++;
	} while (i <= a);
	system("pause");
}