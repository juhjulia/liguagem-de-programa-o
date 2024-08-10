#include <stdio.h>
int main(){
	int maior, menor, valor;
	printf("primeiro numero: ");
	scanf("%d",&valor);
	maior = valor;
	menor = valor;
	printf("segundo numero: ");
	scanf("%d",&valor);
	if(valor > maior){
		maior = valor;
	}
	if(valor > menor){
		menor = valor;
	} 
	printf("3 numero: ");
	scanf("%d",&valor);
	if(valor > maior){
		maior = valor;
	}
	if(valor > menor){
		menor = valor;
	} 
	printf("4 numero: ");
	scanf("%d",&valor);
	if(valor > maior){
		maior = valor;
	}
	if(valor > menor){
		menor = valor;
	}
	printf("5 numero: ");
	scanf("%d",&valor);
	if(valor > maior){
		maior = valor;
	}
	if(valor > menor){
		menor = valor;
	}  
	printf("o maior e %d e o menor e %d",maior,menor);
	return 0;
}
