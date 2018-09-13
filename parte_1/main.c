#include <stdio.h>
#include "arithmetic.h"


int main() {
	int x,y,op;
	printf("Digite os valores de x e y respectivamente");
	scanf("%d %d",&x,&y);
	printf("Digite o numero da operação desejada: 1-soma\n 2-sub\n 3-mul\n 4-div\n");
	scanf("%d",&op);
		switch(op){
		case 1: printf("%lf", sum(x, y));
			break;
		case 2: printf("%lf", sub(x, y));
			break;
		case 3: printf("%lf", mul(x, y));
			break;
		case 4:	printf("%lf", div(x, y));
			break;
		return 0;
	}
}
