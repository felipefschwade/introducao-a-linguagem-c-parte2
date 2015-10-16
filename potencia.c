#include <stdio.h>

void potencia(int* resultado,int a, int b){
	*resultado = 1;
	for (int i = 0; i < b; ++i){
		*resultado = *resultado * a;
	}
}

int main(){
	int a, b, resultado;
	printf("Escreva o número base ");
	scanf("%d", &a);
	printf("Escreva o expoente ");
	scanf("%d", &b);
	potencia(&resultado, a, b);
	printf("%d\n", resultado);
}