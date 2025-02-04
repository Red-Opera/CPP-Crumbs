#include <stdio.h>

void ret(int x) {

	printf("x = %d\n",x);
	ret(x+1);
}

int main(){
	ret(1);

}

