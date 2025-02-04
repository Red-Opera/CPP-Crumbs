#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>

int money = 0, water = 0, att = 0, def = 0;

void buytheitem(int buyx, int buyy)
{
	// 가격으로 아이템 개수 판단
	if (buyy == 30) {  // 물약이라면
		water += 5;
		money -= buyy;
	}
	else if (buyy == 50) {  // 칼이라면
		att += 1;
		money -= buyy;
	}

	else if (buyy == 40) { // 방패라면
		def += 1;
		money -= buyy;
	}
	else; {
	}
	printf("아이템을 %d개을 %d원에 구매했습니다.\n",buyx,buyy);
}
int main()
{
resert:

	printf("무엇을 선택하시겠습니까?\n      1. 아이템 사기\n      2. 돈 벌기\n      2. 돈과 물약 개수 칼의 개수 방패 개수 확인\n고르시오. :");
	int buyormoney = 0, chooseattdef = 0;
	scanf("%d", &buyormoney);
	printf("\n");
	//아이템을 살 것인지 돈 벌 건지 확인
	if (buyormoney == 1) {
		printf("무엇을 선택하시겠습니까?\n      1. 물약\n      2. 칼\n      3.방패\n고르시오. :");
		scanf("%d", &chooseattdef);
		printf("\n");

		//아이템을 선택//

		if (chooseattdef == 1) {       // 물약을 선택했을 경우
			if (money >= 30) {       // 돈이 30원있는지 확인
				buytheitem(5, 30);
				goto resert;
			}
			else; {     // 돈이 30원도 없을 경우
				printf("돈이 부족합니다.\n");
			}
		}

		// 여기까지 물약선택
		else if (chooseattdef == 2) {       // 칼를 선택했을 경우
			if (money >= 50) {       // 돈이 50원있는지 확인
				buytheitem(1, 50);
			}
			else; {     // 돈이 50원도 없을 경우
				printf("돈이 부족합니다.\n");
				goto resert;
			}
		}

		// 여기까지 칼선택
		else if (chooseattdef == 3) {       // 방패를 선택했을 경우
			if (money >= 40) {       // 돈이 40원있는지 확인
				buytheitem(1, 40);
			}
			else; {     // 돈이 40원도 없을 경우
				printf("돈이 부족합니다.\n");
				goto resert;
			}
		}

		// 여기까지 방패선택
	}

	// 여기까지 아이템 사기

	else if (buyormoney == 2) {
		money += 2;
	}
	else if (buyormoney == 3) {
		printf("    돈의 잔액는? : %d\n", money);
		printf("    물약의 갯수는? : %d\n", water);
		printf("    칼의 갯수는? : %d\n", att);
		printf("    방패의 갯수는? : %d\n", def);
	}
	goto resert;
}
