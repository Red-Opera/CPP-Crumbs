#include <iostream>
using namespace std;

int main()
{
	char res;
	cout << "진행하시겠습니까? \n";
	cout << "Y,N,C을 입력하시오.\n";

	cin >> res;

	if (res == 'Y' || res == 'y'){
		cout << "안녕한가 나는상인이여~~\n";
		cin >> res;
	}
	else if (res == 'N' || res == 'n'){

	}
	else if (res == 'C' || res == 'c'){
		cout << "취소되었습니다.\n";
		cin >> res;
	}
	else {
		cout << "Y,N,C만 입력하시오.\n" << '\a' << '\a';
		cin >> res;
	}

	return 0;
}
