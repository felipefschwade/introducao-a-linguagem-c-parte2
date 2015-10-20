#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "forca.h"

char palavrasecreta[20];
int chutesdados = 0;
char chutes[26];

void abertura(){
	printf("*****************\n");
	printf("* JOGO DE FORCA *\n");
	printf("*****************\n");
}
void chuta(){
	char chute;
	scanf(" %c", &chute);
	chutes[chutesdados] = chute;
	(chutesdados)++;
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
	FILE* f;
	int qtddeplavras;
	f = fopen("palavras.txt", "r");
	if(!f){
		printf("Desculpe, banco de dados não disponível\n");
		exit(1);
	}
	fscanf(f, "%d", &qtddeplavras);
	srand(time(0)); 
	int randomico = rand() % qtddeplavras;
	for(int i = 0; i <= randomico; i++){
		fscanf(f, "%s", &palavrasecreta);
	}
	fclose(f);

}
void adicionapalavra(){
	char quer;
	printf("Deseja adicionar mais uma palavra ao jogo? S/N ");
	scanf(" %c", &quer);
	if (quer == 'S'){
		char novapalavra[20];
		printf("Qual a nova palavra que desja adicionar? ");
		scanf("%s", &novapalavra);
		FILE* f;
		f = fopen("palavras.txt", "r+");
		if(!f){
			printf("Desculpe, banco de dados não disponível\n");
			exit(1);
		}
		int qtddeplavras;
		fscanf(f, "%d", &qtddeplavras);
		qtddeplavras++;
		fseek(f, 0, SEEK_SET);
		fprintf(f, "%d", qtddeplavras);
		fseek(f, 0, SEEK_END);
		fprintf(f, "\n%s", novapalavra);
		printf("%s\n", novapalavra);
		fclose(f);
	}
}


int enforcou(){
	int erros = 0;
	for(int i = 0; i < chutesdados; i++){
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

int acertou(){
	for (int i = 0; i < strlen(palavrasecreta); ++i){
		if(!jachutou(palavrasecreta[i])){
			return 0;
		}
	}
	return 1;
}
int jachutou(char letra){
	int achou = 0;
	for (int j = 0; j < chutesdados; ++j){
		if(chutes[j] == letra){
			achou = 1;
			break;
		}
	}
	return achou;
}


int main(){

	abertura();
	
	escolhepalavrasecreta();
	do {
		desenhaforca();
		printf("\n");
		
		chuta();
	}while(!acertou() && !enforcou());
	adicionapalavra();
}

