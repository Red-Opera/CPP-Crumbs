#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>

int main(){
다시:
	int x = 0, y = 0, z = 0, a = 0, b = 0, c = 0; //x, y, z, a, b, c을 0으로//
	printf("ㅡㅡㅡㅡ1.더하기 빼기 \n2.곱하기 \n3.나누기 \n계산하고 싶은 방법을 고르시오. : ");
	scanf("%d", &x);
	if (x == 1) {
		printf("더하거나 빼고 싶은 값을 적으시오.(없으면 0) : ");
		scanf("%d", &y);
		{ //y가 0 일때 끝으로//
			if (y == 0)
				goto exit;
		}

		printf("더하거나 빼고 싶은 값을 적으시오.(없으면 0) : ");
		scanf("%d", &z);

		if (z == 0) {
			goto exit;
		}

		printf("더하거나 빼고 싶은 값을 적으시오.(없으면 0) : ");
		scanf("%d", &a);

		if (a == 0) {
			goto exit;
		}


		printf("더하거나 빼고 싶은 값을 적으시오.(없으면 0) : ");
		scanf("%d", &b);

		if (b == 0) {
			goto exit;

		}

		printf("더하거나 빼고 싶은 값을 적으시오.(없으면 0) : ");
		scanf("%d", &c);

		if (c == 0) {
			goto exit;
		}
	exit:
		int mon;
		mon = y + z + a + b + c;
		printf("%d,%d,%d,%d,%d의 값은? %d\n", y, z, a, b, c, mon);
		int p;
	gogo:
		printf("\n1.예\n2.아니오.\n다시하거나 다른것을 계산하시겠습니까? : ");
		scanf("%d", &p);
		if (p == 1) {
			goto 다시;
		}
		else if (p == 2) {
			system("pause");
		}
		else{
			printf("다시 입력하시오.");
			goto gogo;
		}
	}
	//더하기 빼기//
	else if (x == 2) {
		int y = 1, z = 1, a = 1, b = 1, c = 1;
		printf("곱하고 싶은 값을 적으시오.(없으면 1) : ");
		scanf("%d", &y);
		{
			if (y == 1)
				goto exit2;
		}

		printf("곱하고 싶은 값을 적으시오.(없으면 1) : ");
		scanf("%d", &z);

		if (z == 1) {
			goto exit2;
		}

		printf("곱하고 싶은 값을 적으시오.(없으면 1) : ");
		scanf("%d", &a);

		if (a == 1) {
			goto exit2;
		}


		printf("곱하고 싶은 값을 적으시오.(없으면 1) : ");
		scanf("%d", &b);

		if (b == 1) {
			goto exit2;

		}

		printf("곱하고 싶은 값을 적으시오.(없으면 1) : ");
		scanf("%d", &c);

		if (c == 1) {
			goto exit2;
		}
	exit2:
		int kon;
		kon = y * z * a * b * c;
		printf("%d,%d,%d,%d,%d의 값은? %d", y, z, a, b, c, kon);
		int q;
	go:
		printf("\n1.예\n2.아니오.\n다시하거나 다른것을 계산하시겠습니까? : ");
		scanf("%d", &q);
		if (q == 1) {
			goto 다시;
		}
		else if (q == 2) {
			system("pause");
		}

		else{
			printf("다시 입력하시오.");
			goto go;
		}
	}
	//곱하기//
	else if (x == 3) {
		int y = 1, z = 1, a = 1, b = 1, c = 1;
		printf("나누고 싶은 값을 적으시오.(없으면 1) : ");
		scanf("%d", &y);
		{
			if (y == 1)
				goto exit3;
		}

		printf("나누고 싶은 값을 적으시오.(없으면 1) : ");
		scanf("%d", &z);

		if (z == 1) {
			goto exit3;
		}

		printf("나누고 싶은 값을 적으시오.(없으면 1) : ");
		scanf("%d", &a);

		if (a == 1) {
			goto exit3;
		}


		printf("나누고 싶은 값을 적으시오.(없으면 1) : ");
		scanf("%d", &b);

		if (b == 1) {
			goto exit3;

		}

		printf("나누고 싶은 값을 적으시오.(없으면 1) : ");
		scanf("%d", &c);

		if (c == 1) {
			goto exit3;
		}
	exit3:
		int lon;
		lon = y / z / a / b / c;
		printf("%d,%d,%d,%d,%d의 값은? %d", y, z, a, b, c, lon);
		int u;
    	gogogogo:
		printf("\n1.예\n2.아니오.\n다시하거나 다른것을 계산하시겠습니까? : ");
		scanf("%d", &u);
		if (u == 1) {
			goto 다시;
		}
		else if (u == 2) {
			system("pause");
		}
		else {
			goto gogogogo;
		}
	}
//나누기//
		else { //다른 번호를 선택했을때//
			printf("다시 선택하시오.\n");
			goto 다시; //다시 돌아가기//

	}
}