#include <stdio.h> -> Utilizado para incluir as bibliotecas da linguagem C
#include <stdlib.h> -> biblioteca padrão de C
#include <time.h> -> biblioteca de C que contém funções relacionadas a tempo.
#include <string.h> -> biblioteca de C contendo as funções relacionadas a String
#define SYMBOL value -> define uma constante.


int main() {/*Code*/} -> Função necessária para escrever programas em C
printf("%s\n"); -> Para imprimir algo na tela. 
tipo nomevariavel = valor -> Para Definir variáveis em C
printf("%d", var) -> Para imprimir variáveis do tipo inteiro;
scanf("%tipo", &variavel) -> Para realizar leituras do teclado (%d para int, %u para decimal sem sinal, %l para long int, %f para float, %lf para double, %c para char, %s para String ); 
abs(numero) -> Para Conseguir o número absoluto de um número;
int num = rand() -> Para criar números aleatórios;
num % numero -> Para gerar restos de divisões entre 0 e numero;
srand(funcaonúmerica) -> Passa uma função para impedir o rand de gerar números iguais 
tipo nomevar[numposicoes] -> Para declarar um array  
sprintf(variavelchar, "Palavra") -> Utilizado para armazenar na variavelchar a "palavra" e o último caractere deve ser um '\0'
! -> Indicador de negação
strlen(var) -> Retorna o tamanho da var

//Sempre que for utilizar a leitura de %c deixar um espaço na frente do %c para queo ENTER não fique no buffer e atrapalhe a exibição do código

Sintaxe do For:
for (int i = 0; i < count; ++i)
{
	/* code */
	break; -> para quebrar um loop
	continue; -> Não executa o resto do código porém continua o loop
}
sintaxe do while
while(var){
	//code
}
Sintaxe do Do:
do {
	//code
} while (var);
gcc programa.c -o programa.extensão
gcc -std=c99 foo.c -o foo -> Para erros de definição do c99

Definindo Funções em C:
void/tipo e dado a Retornar nomefunca(tipo var){
	codigo
}
int* Var -> Ponteiro para a Var do tipo int;
Arrays são ponteiros e podem ser manipulados livremente por meio de funções, sem a necessidade do uso da *;

Arquivos de extansão .h podem ser utilizados para conter a assinatura das funções que serão utilizadas
em um programa e imperdir erros de compilção.