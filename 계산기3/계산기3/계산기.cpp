#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
	regoto:
	printf("1.더하기 빼기 \n2.곱하기 \n3.나누기\n4.제곱하고 더하기\n다음중고르시오. :");
	int x;
	scanf("%d", &x);
	//계산할 것 선택//
	if (x == 1) {
		//더하기 뺄셈 선택//
		int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0;    // 10가지 숫자를 더하는 곳//

		//1가지의 수 
		printf("더할 숫자를 고르시오. (없으면 0, 최대 10가지 숫자) 1번째:");
		scanf("%d", &a);
		if (a == 0) {
			goto good;
		}    
		// 여기까지 1가지의 수//

		//2가지의 수
		printf("더할 숫자를 고르시오. (없으면 0, 최대 10가지 숫자) 2번째:");
		scanf("%d", &b);
		if (b == 0) {
			goto good;
		}
		//여기까지 2가지의 수//

		//3가지의 수
		printf("더할 숫자를 고르시오. (없으면 0, 최대 10가지 숫자) 3번째:");
		scanf("%d", &c);
		if (c == 0) {
			goto good;
		}
		// 여기까지 3가지의 수//

		//4가지의 수
		printf("더할 숫자를 고르시오. (없으면 0, 최대 10가지 숫자) 4번째:");
		scanf("%d", &d);
		if (d == 0) {
			goto good;
		}
		//여기까지 4가지의 수/

		//5가지의 수 
		printf("더할 숫자를 고르시오. (없으면 0, 최대 10가지 숫자) 5번째:");
		scanf("%d", &e);
		if (e == 0) {
			goto good;
		}
		// 여기까지 5가지의 수//

		//6가지의 수
		printf("더할 숫자를 고르시오. (없으면 0, 최대 10가지 숫자) 6번째:");
		scanf("%d", &f);
		if (f == 0) {
			goto good;
		}
		//여기까지 6가지의 수//

		//7가지의 수
		printf("더할 숫자를 고르시오. (없으면 0, 최대 10가지 숫자) 7번째:");
		scanf("%d", &g);
		if (g == 0) {
			goto good;
		}
		// 여기까지 7가지의 수//

		//8가지의 수
		printf("더할 숫자를 고르시오. (없으면 0, 최대 10가지 숫자) 8번째:");
		scanf("%d", &h);
		if (h == 0) {
			goto good;
		}
		//여기까지 8가지의 수/

		//9가지의 수
		printf("더할 숫자를 고르시오. (없으면 0, 최대 10가지 숫자) 9번째:");
		scanf("%d", &i);
		if (i == 0) {
			goto good;
		}
		// 여기까지 9가지의 수//

		//10가지의 수
		printf("더할 숫자를 고르시오. (없으면 0, 최대 10가지 숫자) 10번째:");
		scanf("%d", &j);
		if (j == 0) {
			goto good;
		}
		//여기까지 10가지의 수/

		//계산과 끝//
	good:
		int max;
	    max = a + b + c + d + e + f + g + h + i + j;
		printf("총 더한 값은 %d입니다. \n", max);
		printf("다시 하겠습니까? \n1.예 2.아니오\n고르시오. :");
		int nice;      //다시 시작 선택//
		scanf("%d",&nice);
		if (nice == 1){
			printf("\n\n\n\n\n");
			goto regoto;
		}
		printf("\n");

		//덧셈 뺄셈 끝//
	}
	else if (x == 2) {
		//곱셈 선택//
		int a = 1, b = 1, c = 1, d = 1, e = 1, f = 1, g = 1, h = 1, i = 1, j = 1;    // 10가지 숫자를 곱하는 곳//

		//1가지의 수 
		printf("곱할 숫자를 고르시오. (없으면 1, 최대 10가지 숫자) 1번째:");
		scanf("%d", &a);
		if (a == 1) {
			goto bad;
		}
		// 여기까지 1가지의 수//

		//2가지의 수
		printf("곱할 숫자를 고르시오. (없으면 1, 최대 10가지 숫자) 2번째:");
		scanf("%d", &b);
		if (b == 1) {
			goto bad;
		}
		//여기까지 2가지의 수//

		//3가지의 수
		printf("곱할 숫자를 고르시오. (없으면 1, 최대 10가지 숫자) 3번째:");
		scanf("%d", &c);
		if (c == 1) {
			goto bad;
		}
		// 여기까지 3가지의 수//

		//4가지의 수
		printf("곱할 숫자를 고르시오. (없으면 1, 최대 10가지 숫자) 4번째:");
		scanf("%d", &d);
		if (d == 1) {
			goto bad;
		}
		//여기까지 4가지의 수/

		//5가지의 수 
		printf("곱할 숫자를 고르시오. (없으면 1, 최대 10가지 숫자) 5번째:");
		scanf("%d", &e);
		if (e == 1) {
			goto bad;
		}
		// 여기까지 5가지의 수//

		//6가지의 수
		printf("곱할 숫자를 고르시오. (없으면 1, 최대 10가지 숫자) 6번째:");
		scanf("%d", &f);
		if (f == 1) {
			goto bad;
		}
		//여기까지 6가지의 수//

		//7가지의 수
		printf("곱할 숫자를 고르시오. (없으면 1, 최대 10가지 숫자) 7번째:");
		scanf("%d", &g);
		if (g == 1) {
			goto bad;
		}
		// 여기까지 7가지의 수//

		//8가지의 수
		printf("곱할 숫자를 고르시오. (없으면 1, 최대 10가지 숫자) 8번째:");
		scanf("%d", &h);
		if (h == 1) {
			goto bad;
		}
		//여기까지 8가지의 수/

		//9가지의 수
		printf("곱할 숫자를 고르시오. (없으면 1, 최대 10가지 숫자) 9번째:");
		scanf("%d", &i);
		if (i == 1) {
			goto bad;
		}
		// 여기까지 9가지의 수//

		//10가지의 수
		printf("곱할 숫자를 고르시오. (없으면 1, 최대 10가지 숫자) 10번째:");
		scanf("%d", &j);
		if (j == 1) {
			goto bad;
		}
		//여기까지 10가지의 수/

		//계산과 끝//
	bad:
		int max;
		max = a * b * c * d * e * f * g * h * i * j;
		printf("총 곱한 값은 %d입니다. \n", max);
		printf("다시 하겠습니까? \n1.예 2.아니오\n고르시오. :");
		int nice;      //다시 시작 선택//
		scanf("%d", &nice);
		if (nice == 1){
			printf("\n\n\n\n\n");
			goto regoto;
		}

		//곱셈 끝//
	}
	else if (x == 3) {
		//나눗셈 선택//
		int a = 1, b = 1, c = 1, d = 1, e = 1, f = 1, g = 1, h = 1, i = 1, j = 1;    // 10가지 숫자를 곱하는 곳//

		//1가지의 수 
		printf("나눌 숫자를 고르시오. (없으면 1, 최대 10가지 숫자) 1번째:");
		scanf("%d", &a);
		if (a == 1) {
			goto oh;
		}
		// 여기까지 1가지의 수//

		//2가지의 수
		printf("나눌 숫자를 고르시오. (없으면 1, 최대 10가지 숫자) 2번째:");
		scanf("%d", &b);
		if (b == 1) {
			goto oh;
		}
		//여기까지 2가지의 수//

		//3가지의 수
		printf("나눌 숫자를 고르시오. (없으면 1, 최대 10가지 숫자) 3번째:");
		scanf("%d", &c);
		if (c == 1) {
			goto oh;
		}
		// 여기까지 3가지의 수//

		//4가지의 수
		printf("나눌 숫자를 고르시오. (없으면 1, 최대 10가지 숫자) 4번째:");
		scanf("%d", &d);
		if (d == 1) {
			goto oh;
		}
		//여기까지 4가지의 수/

		//5가지의 수 
		printf("나눌 숫자를 고르시오. (없으면 1, 최대 10가지 숫자) 5번째:");
		scanf("%d", &e);
		if (e == 1) {
			goto oh;
		}
		// 여기까지 5가지의 수//

		//6가지의 수
		printf("나눌 숫자를 고르시오. (없으면 1, 최대 10가지 숫자) 6번째:");
		scanf("%d", &f);
		if (f == 1) {
			goto oh;
		}
		//여기까지 6가지의 수//

		//7가지의 수
		printf("나눌 숫자를 고르시오. (없으면 1, 최대 10가지 숫자) 7번째:");
		scanf("%d", &g);
		if (g == 1) {
			goto oh;
		}
		// 여기까지 7가지의 수//

		//8가지의 수
		printf("나눌 숫자를 고르시오. (없으면 1, 최대 10가지 숫자) 8번째:");
		scanf("%d", &h);
		if (h == 1) {
			goto oh;
		}
		//여기까지 8가지의 수/

		//9가지의 수
		printf("나눌 숫자를 고르시오. (없으면 1, 최대 10가지 숫자) 9번째:");
		scanf("%d", &i);
		if (i == 1) {
			goto oh;
		}
		// 여기까지 9가지의 수//

		//10가지의 수
		printf("나눌 숫자를 고르시오. (없으면 1, 최대 10가지 숫자) 10번째:");
		scanf("%d", &j);
		if (j == 1) {
			goto oh;
		}
		//여기까지 10가지의 수/

		//계산과 끝//
	oh:
		int max;
		max = a / b / c / d / e / f / g / h / i / j;
		printf("총 나눈 값은 %d입니다. \n", max);
		printf("다시 하겠습니까? \n1.예 2.아니오\n고르시오. :");
		int nice;      //다시 시작 선택//
		scanf("%d", &nice);
		if (nice == 1){
			printf("\n\n\n\n\n");
			goto regoto;
		}

		//곱셈 끝//
	}
	else if (x == 4) {
		//제곱하여 더할값 선택//
		int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0;    // 10가지 숫자를 곱하는 곳//

		//1가지의 수 
		printf("나눌 숫자를 고르시오. (없으면 0, 최대 10가지 숫자) 1번째:");
		scanf("%d", &a);
		if (a == 0) {
			goto yes;
		}
		// 여기까지 1가지의 수//

		//2가지의 수
		printf("나눌 숫자를 고르시오. (없으면 0, 최대 10가지 숫자) 2번째:");
		scanf("%d", &b);
		if (b == 0) {
			goto yes;
		}
		//여기까지 2가지의 수//

		//3가지의 수
		printf("나눌 숫자를 고르시오. (없으면 0, 최대 10가지 숫자) 3번째:");
		scanf("%d", &c);
		if (c == 0) {
			goto yes;
		}
		// 여기까지 3가지의 수//

		//4가지의 수
		printf("나눌 숫자를 고르시오. (없으면 0, 최대 10가지 숫자) 4번째:");
		scanf("%d", &d);
		if (d == 0) {
			goto yes;
		}
		//여기까지 4가지의 수/

		//5가지의 수 
		printf("나눌 숫자를 고르시오. (없으면 0, 최대 10가지 숫자) 5번째:");
		scanf("%d", &e);
		if (e == 0) {
			goto yes;
		}
		// 여기까지 5가지의 수//

		//6가지의 수
		printf("나눌 숫자를 고르시오. (없으면 0, 최대 10가지 숫자) 6번째:");
		scanf("%d", &f);
		if (f == 0) {
			goto yes;
		}
		//여기까지 6가지의 수//

		//7가지의 수
		printf("나눌 숫자를 고르시오. (없으면 0, 최대 10가지 숫자) 7번째:");
		scanf("%d", &g);
		if (g == 0) {
			goto yes;
		}
		// 여기까지 7가지의 수//

		//8가지의 수
		printf("나눌 숫자를 고르시오. (없으면 0, 최대 10가지 숫자) 8번째:");
		scanf("%d", &h);
		if (h == 0) {
			goto yes;
		}
		//여기까지 8가지의 수/

		//9가지의 수
		printf("나눌 숫자를 고르시오. (없으면 0, 최대 10가지 숫자) 9번째:");
		scanf("%d", &i);
		if (i == 0) {
			goto yes;
		}
		// 여기까지 9가지의 수//

		//10가지의 수
		printf("나눌 숫자를 고르시오. (없으면 0, 최대 10가지 숫자) 10번째:");
		scanf("%d", &j);
		if (j == 0) {
			goto yes;
		}
		//여기까지 10가지의 수/

		//계산과 끝//
	yes:
		int max;
		max = (a * a) + (b * b) + (c * c) + (d * d) + (e * e) + (f * f) + (g * g) + (h * h) + (i * i) + (j * j);
		printf("총 제곱하고 더한수는 %d입니다. \n", max);
		printf("다시 하겠습니까? \n1.예 2.아니오\n고르시오. :");
		int nice;      //다시 시작 선택//
		scanf("%d", &nice);
		if (nice == 1){
			printf("\n\n\n\n\n");
			goto regoto;
		}
		//제곱하고 더하기 끝//
	}
	system("pause");
}