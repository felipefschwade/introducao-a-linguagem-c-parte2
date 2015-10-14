#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void abertura(){
	printf("*****************\n");
	printf("* JOGO DE FORCA *\n");
	printf("*****************\n");
}
void chuta(char chutes[26], int tentativas){
	char chute;
	scanf(" %c", &chute);
	chutes[tentativas] = chute;
}

int main(){
	abertura();

	char palavrasecreta[20];
	sprintf(palavrasecreta, "MELANCIA");

	int acertou = 0;
	int enforcou = 0;
	int tentativas = 0;
	
	char chutes[26];

	do {
		for (int i = 0; i < strlen(palavrasecreta); ++i){
			int achou = 0;

			for (int j = 0; j < tentativas; ++j){
				if(chutes[j] == palavrasecreta[i]){
					achou = 1;
					break;
				}
			}
			if (achou){
				printf("%c ", palavrasecreta[i]);
			} else{
				printf("_ ");	
			}
			 
		}
		printf("\n");
		
		chuta(chutes, tentativas);
		tentativas++;
	}while(!acertou && !enforcou);
}

