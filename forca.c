#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char palavrasecreta[20];
int tentativas = 0;
char chutes[26];

void abertura(){
	printf("*****************\n");
	printf("* JOGO DE FORCA *\n");
	printf("*****************\n");
}
void chuta(){
	char chute;
	scanf(" %c", &chute);
	chutes[tentativas] = chute;
	(tentativas)++;
}

int jachutou(char letra){
	int achou = 0;
	for (int j = 0; j < tentativas; ++j){
		if(chutes[j] == letra){
			achou = 1;
			break;
		}
	}
	return achou;
}
void desenhaforca(){
	for (int i = 0; i < strlen(palavrasecreta); ++i){
		int achou = jachutou(palavrasecreta[i]);

		if (achou){
			printf("%c ", palavrasecreta[i]);
		} else{
			printf("_ ");	
		}
		 
	}
}
void escolhepalavrasecreta(){
	sprintf(palavrasecreta, "MELANCIA");
}

int enforcou(){
	int erros = 0;
	for(int i = 0; i < tentativas; i++){
		int existe = 0;
		for (int j = 0; j < strlen(palavrasecreta); j++){
			if (chutes[i] == palavrasecreta[j]){ 
				existe = 1;
				break;
			}
		}
		if (!existe) erros++;
	}
	return erros >= 5;
}

int main(){

	abertura();
	int acertou = 0;
	
	escolhepalavrasecreta();
	do {
		desenhaforca();
		printf("\n");
		
		chuta();
	}while(!acertou && !enforcou());
}

