#include <iostream>
using namespace std;

int main()
{
	char res;
	cout << "�����Ͻðڽ��ϱ�? \n";
	cout << "Y,N,C�� �Է��Ͻÿ�.\n";

	cin >> res;

	if (res == 'Y' || res == 'y'){
		cout << "�ȳ��Ѱ� ���»����̿�~~\n";
		cin >> res;
	}
	else if (res == 'N' || res == 'n'){

	}
	else if (res == 'C' || res == 'c'){
		cout << "��ҵǾ����ϴ�.\n";
		cin >> res;
	}
	else {
		cout << "Y,N,C�� �Է��Ͻÿ�.\n" << '\a' << '\a';
		cin >> res;
	}

	return 0;
}
