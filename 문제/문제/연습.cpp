#include <stdio.h>

int main()
{
	int num = 0, sum = 0, in = 0;  //�Է� ���� ������ ���� ���� ������ ���� �ʱ�ȭ

	scanf("%d", &num);  //���� ���� ���� 

	if ((in >= -100000) && (in <= 100000)) // ���� ������ ���� ���� ������ ������ �� ���
	{
		for (int i = 1; i <= num; i++)  //  ���� ���� ��ŭ ����
		{
			scanf("%d", &in);
			sum = sum + in;
		}
	}

	printf("%d", sum); // �� ���� ���� ���


	return 0;
}
