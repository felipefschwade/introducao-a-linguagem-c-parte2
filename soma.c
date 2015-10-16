#include <stdio.h>

int soma(int* num, int a, int b){
	*num = a + b;
}

int main(){
	int num, a, b;
	printf("Escreva um número ");
	scanf("%d", &a);
	printf("Escreva um número ");
	scanf("%d", &b);
	soma(&num, a, b);
	printf("A soma de %d + %d é %d\n", a, b, num);
}