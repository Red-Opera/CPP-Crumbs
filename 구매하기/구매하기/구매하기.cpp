#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>

int money = 0, water = 0, att = 0, def = 0;

void buytheitem(int buyx, int buyy)
{
	// �������� ������ ���� �Ǵ�
	if (buyy == 30) {  // �����̶��
		water += 5;
		money -= buyy;
	}
	else if (buyy == 50) {  // Į�̶��
		att += 1;
		money -= buyy;
	}

	else if (buyy == 40) { // ���ж��
		def += 1;
		money -= buyy;
	}
	else; {
	}
	printf("�������� %d���� %d���� �����߽��ϴ�.\n",buyx,buyy);
}
int main()
{
resert:

	printf("������ �����Ͻðڽ��ϱ�?\n      1. ������ ���\n      2. �� ����\n      2. ���� ���� ���� Į�� ���� ���� ���� Ȯ��\n���ÿ�. :");
	int buyormoney = 0, chooseattdef = 0;
	scanf("%d", &buyormoney);
	printf("\n");
	//�������� �� ������ �� �� ���� Ȯ��
	if (buyormoney == 1) {
		printf("������ �����Ͻðڽ��ϱ�?\n      1. ����\n      2. Į\n      3.����\n���ÿ�. :");
		scanf("%d", &chooseattdef);
		printf("\n");

		//�������� ����//

		if (chooseattdef == 1) {       // ������ �������� ���
			if (money >= 30) {       // ���� 30���ִ��� Ȯ��
				buytheitem(5, 30);
				goto resert;
			}
			else; {     // ���� 30���� ���� ���
				printf("���� �����մϴ�.\n");
			}
		}

		// ������� ���༱��
		else if (chooseattdef == 2) {       // Į�� �������� ���
			if (money >= 50) {       // ���� 50���ִ��� Ȯ��
				buytheitem(1, 50);
			}
			else; {     // ���� 50���� ���� ���
				printf("���� �����մϴ�.\n");
				goto resert;
			}
		}

		// ������� Į����
		else if (chooseattdef == 3) {       // ���и� �������� ���
			if (money >= 40) {       // ���� 40���ִ��� Ȯ��
				buytheitem(1, 40);
			}
			else; {     // ���� 40���� ���� ���
				printf("���� �����մϴ�.\n");
				goto resert;
			}
		}

		// ������� ���м���
	}

	// ������� ������ ���

	else if (buyormoney == 2) {
		money += 2;
	}
	else if (buyormoney == 3) {
		printf("    ���� �ܾ״�? : %d\n", money);
		printf("    ������ ������? : %d\n", water);
		printf("    Į�� ������? : %d\n", att);
		printf("    ������ ������? : %d\n", def);
	}
	goto resert;
}
