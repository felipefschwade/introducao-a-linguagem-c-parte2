#include <stdio.h>

void parimpar(int n){
	if (n % 2 == 0){
		printf("1\n");
	} else {
		printf("0\n");
	}
}

int main(){
	int numero;
	printf("Escreva um número: ");
	scanf("%d", &numero);
	parimpar(numero);
}