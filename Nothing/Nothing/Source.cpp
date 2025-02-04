#include <iostream>
using namespace std;

int sum(int num1, int num2, int num3, int num4, int num5)
{
	return num1 + num2 + num3 + num4 + num5;
}

int main(void)
{
    z:  /*이곳으로*/
	int x = 0, y = 0, z = 0, a = 0, b = 0, c = 0, sum = 0;

	cout << "정할것을 고르시오.\n" << "1.덧셈 뺄셈\n" << "2.곱셈\n" << "3.나눗셈\n";
	cin >> x;
	/*선택*/
	if (x == 2){
		goto a;
	}
	if (x == 3){
		goto b;
	}
	if (x >= 4 || x <= 0){
		goto c;
	}
		if(x = 1){
			int num1, num2, num3, num4, num5;
			/*값을 정하기*/
			cout << "첫번째 숫자를 적으시오.(없으면 0):";
		cin >> num1;
		cout << "\n";

		cout << "두번째 숫자를 적으시오.(없으면 0):";
		cin >> num2;
		cout << "\n";

		cout << "세번째 숫자를 적으시오.(없으면 0):";
		cin >> num3;
		cout<< "\n";

		cout << "네번째 숫자를 적으시오.(없으면 0):";
		cin >> num4;
		cout << "\n";

		cout << "다섯번째 숫자를 적으시오.(없으면 0):";
		cin >> num5;
		cout << "\n";
		/*값대입*/
		sum = num1 + num2 + num3 + num4 + num5;
		cout << "값은?" << sum << "\n" << "다음을 넘어갈려면 문자(특수문자제외)나 숫자를 누르고 Enter를 누르시오\n";
		/*값을 더하기*/
		cin >> y;

		goto z;
		/*처음으로 돌아가기*/
		return 0;
		/*덧셈뺄셈*/
	}
		else if(x==2){
			a:
			int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
			/*값을 정하기*/
				cout << "첫번째 숫자를 적으시오.(없으면 1)\n";
				cin >> num1;

				cout << "두번째 숫자를 고르시오.(없으면 1)\n";
				cin >> num2;

				cout << "세번째 숫자를 적으시오.(없으면 1)\n";
				cin >> num3;

				cout << "네번째 숫자를 고르시오.(없으면 1)\n";
				cin >> num4;

				cout << "다섯네번째 숫자를 고르시오.(없으면 1)\n";
				cin >> num5;
				/*값대입*/
				sum = num1 * num2 * num3 * num4 * num5;
				cout << "값은?" << sum << "\n" << "다음을 넘어갈려면 문자(특수문자제외)나 숫자를 누르고 Enter를 누르시오\n";
				/*값을 곱하기*/
				cin >> y;

				goto z;
				/*처음으로 돌아가기*/
				return 0;
			/*곱셈*/
		}
		  else if(x==3){
			  b:
			  int num1 = 0, num2 = 0, num3 = 0, num4 = 0, num5 = 0;
			  /*값을 정하기*/
			      cout << "첫번째 숫자를 적으시오.(없으면 1,0금지)\n";
			      cin >> num1;

			      cout << "두번째 숫자를 고르시오.(없으면 1,0금지)\n";
			      cin >> num2;

			      cout << "세번째 숫자를 적으시오.(없으면1, 0금지)\n";
			      cin >> num3;

			      cout << "네번째 숫자를 고르시오.(없으면 1,0금지)\n";
			      cin >> num4;

		       	  cout << "다섯네번째 숫자를 고르시오.(없으면 1,0금지)\n";
			      cin >> num5;
			      /*값대입*/
			      sum = num1 / num2 / num3 / num4 / num5;
			      cout << "값은?" << sum << "\n" << "다음을 넘어갈려면 문자(특수문자제외)나 숫자를 누르고 Enter를 누르시오\n";
			      /*값을 나누기*/
			      cin >> y;

			      goto z;
			      /*처음으로 돌아가기*/
			      return 0;
	  	      }
		      /*나눗셈*/
		      else if(x>=4 || x<=0){
		   	      c:
			      cout << "1,2,3중에 고르시오.\n";

			      cin >> y;

			      return 0;

		      }
}