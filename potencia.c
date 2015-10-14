#include <stdio.h>

void potencia(int a, int b){
	int resultado = 1;
	for (int i = 0; i < b; ++i){
		resultado = resultado * a;
	}
	printf("%d\n", resultado);
}

int main(){
	int a, b;
	printf("Escreva o número base ");
	scanf("%d", &a);
	printf("Escreva o expoente ");
	scanf("%d", &b);
	potencia(a, b);
}