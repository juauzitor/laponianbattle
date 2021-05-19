#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctime>

int main(int argc, char** argv){
	int i,j,x, peca, linha,coluna,especial, vez;
	char soldado;
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
	
	x= rand() % 100;
	
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
	for(peca = 1; peca<=9; peca++){
		
		printf("%s, Escolha o tipo de soldado voce quer agora. Digite o numero.\n", jogadorN);
		printf("1 - Soldado que atira em linha reta.\n");
		printf("2 - Soldado que atira em diagonal.\n");
		printf("# - Soldado ESPECIAL, Emerald Splash! seu poder e um ataque poderoso em linha reta, que ultrapassa e destroi tudo que toca.\n");
		scanf("%d", &soldado);
		if (soldado == '#'){
		especial = 0;
		}
		printf("%s, coloque a sua %d ° peca:\n", jogadorN, &peca);
	    scanf("%d %d", &linha, &coluna);
	    while(vez == 1){
	    if(tabuleiro[linha][coluna] == '.' && linha <= 4){
		tabuleiro[linha][coluna]=soldado;
		 vez = 0;
		} else{
			printf("Local invalido, tente novamente\n");
			
		} 
	}
	   
	    printf("%s, Escolha o tipo de soldado voce quer agora. Digite o numero.\n", jogadorS);
		printf("1 - Soldado que atira em linha reta.\n");
		printf("2 - Soldado que atira em diagonal.\n");
		printf("@ - Soldado ESPECIAL, Magicians Red, consegue bombardear os inimigos com uma ataques de cruz 3x3 de qualquer lugar do campo.\n");
		
		while(vez == 1){
		
		scanf("%d", &soldado);
		if(soldado == '@' &&  especial == 0){
		
		printf("Voce ja colocou um soldado especial, escolha novamete:\n");
		}
		
		if (soldado == '@'){
		especial = 0;
		}
	}
		printf("%s, coloque a sua %d ° peca:\n", jogadorN, &peca);
	    scanf("%d %d", &linha, &coluna);
	    
	    while(vez == 0){
		
	    if(tabuleiro[linha][coluna] == '.' && linha >=7 ){
		tabuleiro[linha][coluna]=soldado;
	    
		}
		else{
			printf("Local invalido, tente novamente\n");
			vez = 1;
		}
	 }
		system("cls");
		for(i=0; i<LINHAS; i++){
		for(j=0; j<COLUNAS; j++){
			if(tabuleiro[i][j]=='.') printf ("  ");
			else{
				printf("%c ", tabuleiro[i][j]);
			}
	}

	
	
	
	
	
 }
}
	return 0;
}
