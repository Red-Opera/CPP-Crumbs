#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>

int main(){
�ٽ�:
	int x = 0, y = 0, z = 0, a = 0, b = 0, c = 0; //x, y, z, a, b, c�� 0����//
	printf("�ѤѤѤ�1.���ϱ� ���� \n2.���ϱ� \n3.������ \n����ϰ� ���� ����� ���ÿ�. : ");
	scanf("%d", &x);
	if (x == 1) {
		printf("���ϰų� ���� ���� ���� �����ÿ�.(������ 0) : ");
		scanf("%d", &y);
		{ //y�� 0 �϶� ������//
			if (y == 0)
				goto exit;
		}

		printf("���ϰų� ���� ���� ���� �����ÿ�.(������ 0) : ");
		scanf("%d", &z);

		if (z == 0) {
			goto exit;
		}

		printf("���ϰų� ���� ���� ���� �����ÿ�.(������ 0) : ");
		scanf("%d", &a);

		if (a == 0) {
			goto exit;
		}


		printf("���ϰų� ���� ���� ���� �����ÿ�.(������ 0) : ");
		scanf("%d", &b);

		if (b == 0) {
			goto exit;

		}

		printf("���ϰų� ���� ���� ���� �����ÿ�.(������ 0) : ");
		scanf("%d", &c);

		if (c == 0) {
			goto exit;
		}
	exit:
		int mon;
		mon = y + z + a + b + c;
		printf("%d,%d,%d,%d,%d�� ����? %d\n", y, z, a, b, c, mon);
		int p;
	gogo:
		printf("\n1.��\n2.�ƴϿ�.\n�ٽ��ϰų� �ٸ����� ����Ͻðڽ��ϱ�? : ");
		scanf("%d", &p);
		if (p == 1) {
			goto �ٽ�;
		}
		else if (p == 2) {
			system("pause");
		}
		else{
			printf("�ٽ� �Է��Ͻÿ�.");
			goto gogo;
		}
	}
	//���ϱ� ����//
	else if (x == 2) {
		int y = 1, z = 1, a = 1, b = 1, c = 1;
		printf("���ϰ� ���� ���� �����ÿ�.(������ 1) : ");
		scanf("%d", &y);
		{
			if (y == 1)
				goto exit2;
		}

		printf("���ϰ� ���� ���� �����ÿ�.(������ 1) : ");
		scanf("%d", &z);

		if (z == 1) {
			goto exit2;
		}

		printf("���ϰ� ���� ���� �����ÿ�.(������ 1) : ");
		scanf("%d", &a);

		if (a == 1) {
			goto exit2;
		}


		printf("���ϰ� ���� ���� �����ÿ�.(������ 1) : ");
		scanf("%d", &b);

		if (b == 1) {
			goto exit2;

		}

		printf("���ϰ� ���� ���� �����ÿ�.(������ 1) : ");
		scanf("%d", &c);

		if (c == 1) {
			goto exit2;
		}
	exit2:
		int kon;
		kon = y * z * a * b * c;
		printf("%d,%d,%d,%d,%d�� ����? %d", y, z, a, b, c, kon);
		int q;
	go:
		printf("\n1.��\n2.�ƴϿ�.\n�ٽ��ϰų� �ٸ����� ����Ͻðڽ��ϱ�? : ");
		scanf("%d", &q);
		if (q == 1) {
			goto �ٽ�;
		}
		else if (q == 2) {
			system("pause");
		}

		else{
			printf("�ٽ� �Է��Ͻÿ�.");
			goto go;
		}
	}
	//���ϱ�//
	else if (x == 3) {
		int y = 1, z = 1, a = 1, b = 1, c = 1;
		printf("������ ���� ���� �����ÿ�.(������ 1) : ");
		scanf("%d", &y);
		{
			if (y == 1)
				goto exit3;
		}

		printf("������ ���� ���� �����ÿ�.(������ 1) : ");
		scanf("%d", &z);

		if (z == 1) {
			goto exit3;
		}

		printf("������ ���� ���� �����ÿ�.(������ 1) : ");
		scanf("%d", &a);

		if (a == 1) {
			goto exit3;
		}


		printf("������ ���� ���� �����ÿ�.(������ 1) : ");
		scanf("%d", &b);

		if (b == 1) {
			goto exit3;

		}

		printf("������ ���� ���� �����ÿ�.(������ 1) : ");
		scanf("%d", &c);

		if (c == 1) {
			goto exit3;
		}
	exit3:
		int lon;
		lon = y / z / a / b / c;
		printf("%d,%d,%d,%d,%d�� ����? %d", y, z, a, b, c, lon);
		int u;
    	gogogogo:
		printf("\n1.��\n2.�ƴϿ�.\n�ٽ��ϰų� �ٸ����� ����Ͻðڽ��ϱ�? : ");
		scanf("%d", &u);
		if (u == 1) {
			goto �ٽ�;
		}
		else if (u == 2) {
			system("pause");
		}
		else {
			goto gogogogo;
		}
	}
//������//
		else { //�ٸ� ��ȣ�� ����������//
			printf("�ٽ� �����Ͻÿ�.\n");
			goto �ٽ�; //�ٽ� ���ư���//

	}
}