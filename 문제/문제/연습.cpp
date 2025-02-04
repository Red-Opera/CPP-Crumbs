#include <stdio.h>

int main()
{
	int num = 0, sum = 0, in = 0;  //입력 받을 개수와 더한 값과 대입할 값을 초기화

	scanf("%d", &num);  //받을 개수 대입 

	if ((in >= -100000) && (in <= 100000)) // 받을 개수와 더할 값이 조건이 만족을 할 경우
	{
		for (int i = 1; i <= num; i++)  //  받을 개수 만큼 실행
		{
			scanf("%d", &in);
			sum = sum + in;
		}
	}

	printf("%d", sum); // 다 더한 값을 출력


	return 0;
}
