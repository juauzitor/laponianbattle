#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctime>

int main(int argc, char** argv){
	int i,j,x;
	srand(time(NULL));
	x= rand() % 100;
	const int LINHAS = 12;
	const int COLUNAS= 12;
	char jogadorN[200];
	char jogadorS[200];
	

printf("Digite o nome do jogador que representara o Norte\n");
	scanf("%s", jogadorN);
printf("Digite o nome do jogador que representara o Sul\n");
	scanf("%s", jogadorS);
	
	if(x%2==0){
		printf("%s vai jogar primeiro\n", jogadorN);
	}
	else{
		printf("%s vai jogar primeiro\n", jogadorS);
	}
	
	system("pause\n");
	system("cls");
	
	
	char tabuleiro[LINHAS] [COLUNAS] ={
	
		
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
		{'*', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*'},
		{'*', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*'},
		{'*', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*'},
		{'*', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*'},
		{'*', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~', '*'},
		{'*', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~', '*'},
		{'*', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*'},
		{'*', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*'},
		{'*', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*'},
		{'*', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*'},
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'} 
	};
		printf("Norte:%s\n", jogadorN);
		printf("Sul:%s\n", jogadorS);
		
	for(i=0; i<LINHAS; i++){
		for(j=0; j<COLUNAS; j++){
			if(tabuleiro[i][j]=='.') printf ("  ");
			else{
				printf("%c ", tabuleiro[i][j]);
			}
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	return 0;
}
