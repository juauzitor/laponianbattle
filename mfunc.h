#include <stdio.h>
#include <stdlib.h>
#include "board.h"

// Função para descobrir se o sistema é windows ou linux para limpar o terminal

void clear(void){
// Windows
    #ifdef WIN32
        system("cls");
// Linux
    #else
        system("clear");
    #endif
}
// Função para descobrir se o sistema é windows ou linux e pausar a execução

void pause(void){
// Windows
    #ifdef WIN32
        system("pause");
// Linux
    #else
        printf("Press any key to continue . . \n");
        system("bash -c 'read -n1 -r -p '. . .' key'");

    #endif 
}

// Função para imprimir na tela
void impressao(void){
    int i, j;
	for(i=0; i<LINHAS; i++){
		for(j=0; j<COLUNAS; j++){
				printf("%c ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}
