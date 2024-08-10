#include <stdio.h>
int main(){
	int num;
	printf("digite um numero: ");
	scanf("%d", &num);
	if(num % 5 == 0){
		printf("O numero %d e div por 5.",num);
		}else {
			printf("O numero %d n e div por 5.",num);
		}
	
	return 0;
}
