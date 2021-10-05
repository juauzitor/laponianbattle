#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctime>
#include <locale.h>

// Carlos Henrique Racobaldo Luz Montes, Fernando Ant�nio Marques Schettini, Francielle Andrade Cardoso, Jo�o Vitor Mendes Pinto dos Santos


int main(int argc, char** argv){
	setlocale(LC_ALL,"Portuguese");
	int i,j,x, peca, linha,coluna,especial=1, vez=1, vez2, especial2=1, linha2, coluna2, vez3, vitoria=0, acertar, vez4,soldN,soldS, vez10;
	char soldado, acao, direcao, tiro,  colunaa[2], linhac[2],linhaof[2],colunac[2];
	srand(time(NULL));
	x= rand() % 100;
	const int LINHAS = 12;
	const int COLUNAS= 12;
	char jogadorN[200];
	char jogadorS[200];


printf("Digite o nome do jogador que representar� o Norte:\n");
	scanf("%s", jogadorN);
printf("Digite o nome do jogador que representar� o Sul:\n");
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

if(x%2==0){

	for(peca = 1; peca<=2; peca++){

	// Vez do jogador Norte como primeiro jogador.
		printf("%s, Escolha o tipo de soldado que voc� quer agora. Digite o n�mero:\n", jogadorN);
		printf("1 - Soldado que atira em linha reta.\n");
		printf("2 - Soldado que atira em diagonal.\n");
		printf("# - Soldado ESPECIAL, que s� pode ser colocado UMA vez, Emerald Splash! seu poder � um ataque poderoso em linha reta, que ultrapassa e destroi tudo que toca.\n");

		scanf(" %c", &soldado);

		vez2 = 0;
		while(vez2 == 0){
		if (soldado == '1' || soldado == '2' || soldado == '#' && especial == 1){

		printf("%s, digite a posi��o da sua %d� pe�a, indique a linha e em seguida a coluna:\n", jogadorN, peca);

		vez=1;
		while(vez == 1){
		scanf(" %s %s", linhac, colunac);
		
		strcpy(linhaof, linhac);
		strcpy(colunaa, colunac);
		linha = atoi(linhaof);
		coluna = atoi(colunaa);
		
	    if(tabuleiro[linha][coluna] == '.' && linha <= 4 ){
		tabuleiro[linha][coluna]=soldado;
		vez = 0;
		if(soldado == '#'){

		especial = 0;

		} 
		} else{
			printf("Local inv�lido, tente novamente:\n");

		}
	}
		vez2 = 1;
	}
	else{
		printf("Soldado inv�lido. Tente novamente:\n");
		scanf("%c", &soldado);
	}

	   }
	   system("cls");

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
	// Vez do jogador Sul como segundo jogador.
	    printf("%s, Escolha o tipo de soldado que voc� quer agora. Digite o n�mero:\n", jogadorS);
		printf("1 - Soldado que atira em linha reta.\n");
		printf("2 - Soldado que atira em diagonal.\n");
		printf("@ - Soldado ESPECIAL, que s� pode ser colocado UMA vez, Magicians Red! seu poder � um ataque poderoso em cruz, 3x3 que queima os inimigos na �rea.\n");

		scanf(" %c", &soldado);

		vez2 = 0;
		while(vez2 == 0){
		if (soldado == '1' || soldado == '2' || soldado == '@' && especial2 == 1){

		printf("%s, digite a posi��o da sua %d� pe�a, indique a linha e em seguida a coluna:\n", jogadorS, peca);

		vez=1;
		while(vez == 1){
		scanf(" %s %s", linhac, colunac);	
		strcpy(linhaof, linhac);
		strcpy(colunaa, colunac);
		linha = atoi(linhaof);
		coluna = atoi(colunaa);
	    
		
		
		
		if(tabuleiro[linha][coluna] == '.' && linha >= 7){
		tabuleiro[linha][coluna]=soldado;
		vez = 0;
		if(soldado == '@'){

		especial2 = 0;

		} 
		} else{
			printf("Local inv�lido, tente novamente:\n");

		}
	}
		vez2 = 1;
	}
	else{
		printf("Soldado inv�lido. Tente novamente:\n");
		scanf("%c", &soldado);
	}

	   }
	   system("cls");

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
}
}
else{
		for(peca = 1; peca<=2; peca++){

	// Vez do jogador Sul como primeiro jogador.
		printf("%s, Escolha o tipo de soldado que voc� quer agora. Digite o n�mero:\n", jogadorS);
		printf("1 - Soldado que atira em linha reta.\n");
		printf("2 - Soldado que atira em diagonal.\n");
		printf("@ - Soldado ESPECIAL, que s� pode ser colocado UMA vez, Magicians Red! seu poder � um ataque poderoso em cruz, 3x3 que queima os inimigos na �rea.\n");

		scanf(" %c", &soldado);

		vez2 = 0;
		while(vez2 == 0){
		if (soldado == '1' || soldado == '2' || soldado == '@' && especial2 == 1){

		printf("%s, digite a posi��o da sua %d� pe�a, indique a linha e em seguida a coluna:\n", jogadorS, peca);

		vez=1;
		while(vez == 1){
		scanf(" %s %s", linhac, colunac);
		strcpy(linhaof, linhac);
		strcpy(colunaa, colunac);
		linha = atoi(linhaof);
		coluna = atoi(colunaa);
	    
		
		
		
		if(tabuleiro[linha][coluna] == '.' && linha >= 7){
		tabuleiro[linha][coluna]=soldado;
		vez = 0;
		if(soldado == '@'){

		especial2 = 0;

		} 
		} else{
			printf("Local inv�lido, tente novamente:\n");

		}
	}
		vez2 = 1;
	}
	else{
		printf("Soldado inv�lido. Tente novamente:\n");
		scanf(" %c", &soldado);
	}

	   }
	   system("cls");

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
		// Vez do jogador Norte como segundo jogador.
		printf("%s, Escolha o tipo de soldado que voc� quer agora. Digite o n�mero:\n", jogadorN);
		printf("1 - Soldado que atira em linha reta.\n");
		printf("2 - Soldado que atira em diagonal.\n");
		printf("# - Soldado ESPECIAL, que s� pode ser colocado UMA vez, Emerald Splash! seu poder � um ataque poderoso em linha reta, que ultrapassa e destroi tudo que toca.\n");

		scanf(" %c", &soldado);

		vez2 = 0;
		while(vez2 == 0){
		if (soldado == '1' || soldado == '2' || soldado == '#' && especial == 1){

		printf("%s, digite a posi��o da sua %d� pe�a, indique a linha e em seguida a coluna:\n", jogadorN, peca);

		vez=1;
		while(vez == 1){
		scanf(" %s %s", linhac, colunac);
		strcpy(linhaof, linhac);
		strcpy(colunaa, colunac);
		linha = atoi(linhaof);
		coluna = atoi(colunaa);
	    
		
		
		if(tabuleiro[linha][coluna] == '.' && linha <= 4){
		tabuleiro[linha][coluna]=soldado;
		vez = 0;
		if(soldado == '#'){

		especial = 0;

		} 
		} else{
			printf("Local inv�lido, tente novamente:\n");

		}
	}
		vez2 = 1;
	}
	else{
		printf("Soldado inv�lido. Tente novamente:\n");
		scanf(" %c", &soldado);
	}

	   }
	   system("cls");

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
}
system("pause");
system("cls");

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

}

//Acabou os posicionamentos de tropa, agora � a movimentacao e ataque.
printf("Todas as tropas foram posicionadas, quem vai vencer?\nO jogador tem 2 op��es, movimentar ou atacar.\n");
//Jogardor Norte primeiro
vitoria = 0;
while(vitoria == 0){


if(x%2 == 0){
	
	printf("%s, Selecione o soldado que voce gostaria de interagir. Digite a posi��o dele, primeiro linha depois coluna:\nOBS:escolha tropas apenas do seu campo.(Norte)", jogadorN);
    vez = 0;
	while(vez == 0){
		scanf(" %s %s", linhac, colunac);
		strcpy(linhaof, linhac);
		strcpy(colunaa, colunac);
		linha = atoi(linhaof);
		coluna = atoi(colunaa);
		vez2 = 0;
		if(tabuleiro[linha][coluna] == '.' || tabuleiro[linha][coluna] == '*' || tabuleiro[linha][coluna] == '~' || linha > 4){ 	
			printf("Local inv�lido. Tente novamente.\n");
		}
		else{
		vez2 = 0;
		while( vez2 == 0){
			printf("O que voc� gostaria de fazer?\nDigite A para atarcar ou M para movimentar\n "); 
			scanf(" %c", &acao);
			vez = 1;
		
			if(acao == 'A' || acao == 'a'){
					printf("Voce escolheu atacar.\nOBS: FOGO AMIGO � POSS�VEL\n");
					vez2 = 1;
			
				 	if(tabuleiro[linha][coluna] =='1'){
						linha2 = linha + 1;
						acertar = 0;
			
						while(acertar == 0 && tabuleiro[linha2][coluna] != '*'){
				
		           			if(tabuleiro[linha2][coluna]  == '1' || tabuleiro[linha2][coluna]  == '2' || tabuleiro[linha2][coluna]  == '@'){
					           	tabuleiro[linha2][coluna] = '.';
					           	printf("Soldado abatido. na casa %d %d.\n", linha2, coluna);
					           	acertar = 1;
					           	system("pause");
							}
							else{
								linha2 ++;
							}
						}
					}
					if(tabuleiro[linha][coluna] == '2'){
						vez4 = 0;
						while(vez4 == 0){
							
								printf("O Sniper dever� atirar em qual dire��o?\n Digite E - para o Sniper atacar na diagonal esquerda.\n Digite D - para o Sniper atirar na diagonal direita.\n");
								scanf(" %c", &tiro);
								if( tiro == 'D' || tiro== 'd'){
								vez4 = 1;
								linha2 = linha + 1;
								coluna2 = coluna - 1;
								acertar = 0;
								while(acertar == 0 && tabuleiro[linha2][coluna2] != '*'){
								
						        	   if(tabuleiro[linha2][coluna2]  == '1' || tabuleiro[linha2][coluna2]  == '2' || tabuleiro[linha2][coluna2]  == '@'){
						           		tabuleiro[linha2][coluna2] = '.';
						    	       	printf("Soldado abatido. Na casa %d %d\n", linha2, coluna2);
						        	   	acertar = 1;
							           	system("pause");
									   }
									   else{
											linha2 ++;
									        coluna2 --;    
										}
								}
							}
							if( tiro == 'E' || tiro== 'e'){
								vez4 = 1;
								linha2 = linha + 1;
								coluna2 = coluna + 1;
								acertar = 0;
								while(acertar == 0 && tabuleiro[linha2][coluna2] != '*'){
							           if(tabuleiro[linha2][coluna2]  == '1' || tabuleiro[linha2][coluna2]  == '2' || tabuleiro[linha2][coluna2]  == '@'){
							           		tabuleiro[linha2][coluna2] = '.';
							           		printf("Soldado abatido. Na casa %d %d\n", linha2, coluna2);
							           		acertar = 1;
							           		system("pause");
									   }
									   else{
										linha2 ++;
							        	coluna2 ++;    
									   }
								}	
							}
							if( tiro != 'D' && tiro != 'd' && tiro != 'E'  && tiro != 'e'){
								printf("Dire��o inv�lida.\n");
							}
						}	
				}
					if(tabuleiro[linha][coluna] == '#'){
						printf("EMERALD SPLASH! NINGUEM NUNCA PODER� DESVIAR DELE!\n");
						linha2 = linha + 1;
						while( tabuleiro[linha2][coluna] != '*'){
			
	           				if(tabuleiro[linha2][coluna]  == '1' || tabuleiro[linha2][coluna]  == '2' || tabuleiro[linha2][coluna]  == '@'){
	           					tabuleiro[linha2][coluna] = '.';
	           					printf("Soldado abatido. Na casa %d %d\n", linha2, coluna);
	           					system("pause");
			   				}
								else{
									linha2 ++;
								}
						}
	    			}
			
			
			soldS = 0;
	for(i=7; i <= 10; i++){
			for(j=1; j <= 10; j++){
				if(tabuleiro[i][j] != '.' && tabuleiro[i][j] != '~' && tabuleiro[i][j] != '*'){
				soldS ++;
				}
			}
			
			}
			if(soldS == 0){
		vitoria = 1;
		
		
	}
	}
			if(acao == 'M' || acao == 'm'){
	printf("Voc� escolheu movimentar.\nOBS: Soldados podem se movimentar apenas uma unidade. O soldado nao pode ocupar rios, montanhas, e outros soldados\n");
	vez2 = 1;
	vez3 = 0;
	printf("Digite F - para o soldado ir para frente.\nDigite T - para o soldado ir para tr�s.\nDigite E - para o soldado ir para esquerda\nDigite D - para o soldado ir para direita.\nDigite V - caso seu soldado esteja cercado, assim passando a vez para o oponente.\n");
	scanf(" %c", &direcao);
	
	while(vez3 == 0){
	
	if(direcao == 'F' || direcao == 'f' ){
	  if(tabuleiro[linha + 1][coluna] == '.'){
	  	
	tabuleiro[linha+ 1][coluna] = tabuleiro[linha][coluna];
	tabuleiro[linha][coluna] = '.';
	vez3 = 1;	
     } else{
     	printf("Posi��o inv�lida. Tente novamente:\n");
     	scanf(" %c", &direcao);
	 }
	} 
	if(direcao == 'T'  || direcao == 't'){
	if (tabuleiro[linha - 1][coluna] == '.'){
	
	    tabuleiro[linha - 1][coluna] = tabuleiro[linha][coluna];
		tabuleiro[linha][coluna] = '.';	
		vez3 = 1;	
		
	}
	else{
     	printf("Posi��o inv�lida. Tente novamente:\n");
     	scanf(" %c", &direcao);
	 }
}
	 
	if(direcao == 'E' || direcao == 'e' ){
	if(tabuleiro[linha] [coluna + 1] == '.'){
	 tabuleiro[linha][coluna + 1] = tabuleiro[linha][coluna];
		tabuleiro[linha][coluna] = '.';	
		vez3 = 1;	
		
	}
	else{
     	printf("Posi��o inv�lida. Tente novamente:\n");
     	scanf(" %c", &direcao);
	 }
}
	if(direcao == 'D' || direcao == 'd' ){
	if (tabuleiro[linha][coluna - 1] == '.'){
	
	tabuleiro[linha ][coluna - 1 ] = tabuleiro[linha][coluna];
	tabuleiro[linha][coluna] = '.';	
	vez3 = 1;	
		
	}
	else{
     	printf("Posi��o inv�lida. Tente novamente:\n");
     	scanf(" %c", &direcao);
	 }
}
	if( direcao == 'V'|| direcao == 'v'){
		vez3 = 1;
		
		
	}
} //while
}
}// A��o M
 if(acao != 'A' && acao != 'a' && acao != 'M' && acao != 'm'){
	printf("A��o inv�lida.\n");	
	}
	}
    }
	// While da a��o
	system("cls");

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
	

 // Sele��o do soldado
 // While vez normal

// Vez do Sul como 2�jogador

if(vitoria == 0){

printf("%s, Selecione o soldado que voce gostaria de interagir. Digite a posi��o dele, primeiro linha depois coluna:\nOBS:escolha tropas apenas do seu campo.(Sul)", jogadorS);
    vez = 0;
    vez2 = 0;
while(vez == 0){
	scanf(" %s %s", linhac, colunac);
		strcpy(linhaof, linhac);
		strcpy(colunaa, colunac);
		linha = atoi(linhaof);
		coluna = atoi(colunaa);
    	
if(tabuleiro[linha][coluna] == '.' || tabuleiro[linha][coluna] == '*' || tabuleiro[linha][coluna] == '~' || linha < 7){ 	
	printf("Local inv�lido. Tente novamente.\n");

}
else{
	while( vez2 == 0){
	printf("O que voc� gostaria de fazer?\nDigite A para atarcar ou M para movimentar\n "); 
	scanf(" %c", &acao);
	vez =1;
	
	if(acao == 'A' || acao == 'a'){
	printf("Voc� escolheu atacar.\n OBS: FOGO AMIGO � POSS�VEL\n");
	vez2 = 1;
	
	if(tabuleiro[linha][coluna] =='1'){
	linha2 = linha - 1;
	acertar = 0;
	
	
	
	while(acertar == 0 && tabuleiro[linha2][coluna] != '*'){
		
           if(tabuleiro[linha2][coluna]  == '1' || tabuleiro[linha2][coluna]  == '2' || tabuleiro[linha2][coluna]  == '#'){
           	tabuleiro[linha2][coluna] = '.';
           	printf("Soldado abatido. Na casa %d %d\n", linha2, coluna);
           	acertar = 1;
           	system("pause");
		   }else{
	   
		linha2 --;
    
	}
	}
	
	
	}
	if(tabuleiro[linha][coluna] == '2'){
	vez4 = 0;
	while(vez4 == 0){
	
	printf("O Sniper dever� atirar em qual dire��o?\n Digite E - para o Sniper atacar na diagonal esquerda.\n Digite D - para o Sniper atirar na diagonal direita.\n");
	scanf(" %c", &tiro);
	if( tiro == 'D' || tiro== 'd'){
	vez4 = 1;
	linha2 = linha -1;
	coluna2 = coluna + 1;
	acertar = 0;
	while(acertar == 0 && tabuleiro[linha2][coluna] != '*'){
		
           if(tabuleiro[linha2][coluna2]  == '1' || tabuleiro[linha2][coluna2]  == '2' || tabuleiro[linha2][coluna2]  == '#'){
           	tabuleiro[linha2][coluna2] = '.';
           	printf("Soldado abatido. Na casa %d %d\n", linha2, coluna2);
           	acertar = 1;
           	system("pause");
		   }else{
	   
		linha2 --;
        coluna2 ++;    
	}
	}
	
	
	}
	
	if( tiro == 'E' || tiro== 'e'){
	
	vez4 = 1;
	linha2 = linha - 1;
	coluna2 = coluna - 1;
	acertar = 0;
	while(acertar == 0 && tabuleiro[linha2][coluna] != '*'){
		
           if(tabuleiro[linha2][coluna2]  == '1' || tabuleiro[linha2][coluna2]  == '2' || tabuleiro[linha2][coluna2]  == '#'){
           	tabuleiro[linha2][coluna2] = '.';
           	printf("Soldado abatido. Na casa %d %d\n", linha2, coluna2);
           	acertar = 1;
           	system("pause");
		   }else{
	   
		linha2 --;
        coluna2 --;    
	}	
	}
	if( tiro != 'D' && tiro != 'd' && tiro != 'E'  && tiro != 'e'){
	printf("Dire��o inv�lida.\n");
	}
}
	}
	}
	if(tabuleiro[linha][coluna] == '@'){
		vez10 = 1;
		
	printf("CROSSFIRE HURRICANE! NINGUEM NUNCA PODER� DESVIAR DELE!\n");
	
	printf("Selecione uma posi��o para ser bombardeada, a casa nao pode ser montanha. Linha primeiro em seguida a coluna:\n");
	while(vez10 == 1){
	
	scanf(" %s %s", linhac, colunac);
		strcpy(linhaof, linhac);
		strcpy(colunaa, colunac);
		linha = atoi(linhaof);
		coluna = atoi(colunaa);
    if(linha == 0 || coluna == 0 || linha == 11 || coluna == 11){
 printf("Local inv�lido, tente novamente.\n");
}else{
    vez10 = 0;
	if(tabuleiro[linha][coluna] == '1' || tabuleiro[linha][coluna] == '@'|| tabuleiro[linha][coluna] == '#' || tabuleiro[linha][coluna] == '2'){
	  tabuleiro[linha][coluna] = '.';
	  printf("Soldado abatido. Na casa %d %d\n", linha, coluna);
	  system("pause");	
	}
	if(tabuleiro[linha + 1][coluna] == '1' || tabuleiro[linha + 1][coluna] == '@'|| tabuleiro[linha + 1][coluna] == '#' || tabuleiro[linha + 1][coluna] == '2'){
	  tabuleiro[linha + 1][coluna] = '.';
	  printf("Soldado abatido. Na casa %d %d\n", linha + 1, coluna);	
	system("pause");
	}
	if(tabuleiro[linha - 1][coluna] == '1' || tabuleiro[linha - 1][coluna] == '@'|| tabuleiro[linha - 1][coluna] == '#' || tabuleiro[linha - 1][coluna] == '2'){
	  tabuleiro[linha - 1][coluna] = '.';
	  printf("Soldado abatido. Na casa %d %d\n", linha - 1, coluna);
	  system("pause");	
	}
	if(tabuleiro[linha][coluna + 1] == '1' || tabuleiro[linha][coluna + 1] == '@'|| tabuleiro[linha][coluna+ 1] == '#' || tabuleiro[linha][coluna+ 1] == '2'){
	  tabuleiro[linha][coluna + 1] = '.';
	
	  printf("Soldado abatido. Na casa %d %d\n", linha, coluna + 1);
	  system("pause");
	}
	if(tabuleiro[linha][coluna - 1] == '1' || tabuleiro[linha][coluna - 1] == '@'|| tabuleiro[linha][coluna - 1] == '#' || tabuleiro[linha][coluna - 1] == '2'){
	  tabuleiro[linha][coluna - 1] = '.';
	  printf("Soldado abatido. Na casa %d %d\n", linha, coluna - 1);
		system("pause");
	}
}
}
}
	//averiguar a vitoria do jogador SUL
	soldN = 0;
	for(i=1; i <= 4; i++){
			for(j=1; j <= 10; j++){
				if(tabuleiro[i][j] != '.' && tabuleiro[i][j] != '~' && tabuleiro[i][j] != '*'){
				soldN ++;
				}
			}
    
	}
	if(soldN == 0){
		vitoria = 1;
	}
}
	if(acao == 'M' || acao == 'm'){
	printf("Voc� escolheu movimentar.\nOBS: Soldados podem se movimentar apenas uma unidade. O soldado n�o pode ocupar rios, montanhas, e outros soldados\n");
	vez2 = 1;
	vez3 = 0;
	printf("Digite F - para o soldado ir para frente.\nDigite T - para o soldado ir para tr�s.\nDigite E - para o soldado ir para esquerda\nDigite D - para o soldado ir para direita.\nDigite V - caso seu soldado esteja cercado, voc� voltar� para o menu de ataque ou movimento.\n");
	scanf(" %c", &direcao);
	
	while(vez3 == 0){
	
	if(direcao == 'F' || direcao == 'f' ){
	  if(tabuleiro[linha -1][coluna] == '.'){
	  	
	tabuleiro[linha- 1][coluna] = tabuleiro[linha][coluna];
	tabuleiro[linha][coluna] = '.';
	vez3 = 1;	
     } else{
     	printf("Posi��o inv�lida. Tente novamente:\n");
     	scanf(" %c", &direcao);
	 }
	} 
	if(direcao == 'T'  || direcao == 't'){
	if (tabuleiro[linha + 1][coluna] == '.'){
	
	    tabuleiro[linha + 1][coluna] = tabuleiro[linha][coluna];
		tabuleiro[linha][coluna] = '.';	
		vez3 = 1;	
		
	}
	else{
     	printf("Posi��o inv�lida. Tente novamente:\n");
     	scanf(" %c", &direcao);
	 }
}
	 
	if(direcao == 'E' || direcao == 'e' ){
	if(tabuleiro[linha] [coluna - 1] == '.'){
	 tabuleiro[linha][coluna - 1] = tabuleiro[linha][coluna];
		tabuleiro[linha][coluna] = '.';	
		vez3 = 1;	
		
	}
	else{
     	printf("Posi��o inv�lida. Tente novamente:\n");
     	scanf(" %c", &direcao);
	 }
}
	if(direcao == 'D' || direcao == 'd' ){
	if (tabuleiro[linha][coluna + 1] == '.'){
	
	tabuleiro[linha ][coluna + 1 ] = tabuleiro[linha][coluna];
	tabuleiro[linha][coluna] = '.';	
	vez3 = 1;	
		
	}
	else{
     	printf("Posi��o inv�lida. Tente novamente:\n");
     	scanf(" %c", &direcao);
	 }
}
	if( direcao == 'V'|| direcao == 'v'){
		vez3 = 1;
		
		
	}
} //while vez 3

	}// A��o M
 if(acao != 'A' && acao != 'a' && acao != 'M' && acao != 'm'){
	printf("A��o inv�lida.\n");	
	}


	} // while da a��o
	system("cls");

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


} // if jogar 1�
}
	


	
  
 //Jogador Sul primeiro
} // While vez
}else{
	printf("%s, Selecione o soldado que voce gostaria de interagir. Digite a posi��o dele, primeiro linha depois coluna:\nOBS:escolha tropas apenas do seu campo.(Sul)", jogadorS);
    vez = 0;
    vez2 = 0;
while(vez == 0){
	scanf(" %s %s", linhac, colunac);
		strcpy(linhaof, linhac);
		strcpy(colunaa, colunac);
		linha = atoi(linhaof);
		coluna = atoi(colunaa);
    	
if(tabuleiro[linha][coluna] == '.' || tabuleiro[linha][coluna] == '*' || tabuleiro[linha][coluna] == '~' || linha < 7){ 	
	printf("Local inv�lido. Tente novamente.\n");

}
else{
	while( vez2 == 0){
	printf("O que voc� gostaria de fazer?\nDigite A para atarcar ou M para movimentar\n "); 
	scanf(" %c", &acao);
	vez =1;
	
	if(acao == 'A' || acao == 'a'){
	printf("Voc� escolheu atacar.\n OBS: FOGO AMIGO � POSS�VEL\n");
	vez2 = 1;
	
	if(tabuleiro[linha][coluna] =='1'){
	linha2 = linha - 1;
	acertar = 0;
	
	
	
	while(acertar == 0 && tabuleiro[linha2][coluna] != '*'){
		
           if(tabuleiro[linha2][coluna]  == '1' || tabuleiro[linha2][coluna]  == '2' || tabuleiro[linha2][coluna]  == '#'){
           	tabuleiro[linha2][coluna] = '.';
           	printf("Soldado abatido. Na casa %d %d\n", linha2, coluna);
           	acertar = 1;
           	system("pause");
		   }else{
	   
		linha2 --;
    
	}
	}
	
	
	}
	if(tabuleiro[linha][coluna] == '2'){
	vez4 = 0;
	while(vez4 == 0){
	
	printf("O Sniper dever� atirar em qual dire��o?\n Digite E - para o Sniper atacar na diagonal esquerda.\n Digite D - para o Sniper atirar na diagonal direita.\n");
	scanf(" %c", &tiro);
	if( tiro == 'D' || tiro== 'd'){
	vez4 = 1;
	linha2 = linha -1;
	coluna2 = coluna + 1;
	acertar = 0;
	while(acertar == 0 && tabuleiro[linha2][coluna] != '*'){
		
           if(tabuleiro[linha2][coluna2]  == '1' || tabuleiro[linha2][coluna2]  == '2' || tabuleiro[linha2][coluna2]  == '#'){
           	tabuleiro[linha2][coluna2] = '.';
           	printf("Soldado abatido. Na casa %d %d\n", linha2, coluna2);
           	acertar = 1;
           	system("pause");
		   }else{
	   
		linha2 --;
        coluna2 ++;    
	}
	}
	
	
	}
	
	if( tiro == 'E' || tiro== 'e'){
	
	vez4 = 1;
	linha2 = linha - 1;
	coluna2 = coluna - 1;
	acertar = 0;
	while(acertar == 0 && tabuleiro[linha2][coluna] != '*'){
		
           if(tabuleiro[linha2][coluna2]  == '1' || tabuleiro[linha2][coluna2]  == '2' || tabuleiro[linha2][coluna2]  == '#'){
           	tabuleiro[linha2][coluna2] = '.';
           	printf("Soldado abatido. Na casa %d %d\n", linha2, coluna2);
           	acertar = 1;
           	system("pause");
		   }else{
	   
		linha2 --;
        coluna2 --;    
	}	
	}
	if( tiro != 'D' && tiro != 'd' && tiro != 'E'  && tiro != 'e'){
	printf("Dire��o inv�lida.\n");
	}
}
	}
	}
	if(tabuleiro[linha][coluna] == '@'){
	vez10 = 1;
	
	
	printf("CROSSFIRE HURRICANE! NINGUEM NUNCA PODER� DESVIAR DELE!\n");
	printf("Selecione uma posi��o para ser bombardeada, a casa nao pode ser montanha. Linha primeiro em seguida a coluna:\n");
	while(vez10 == 1){
	
	scanf(" %s %s", linhac, colunac);
		strcpy(linhaof, linhac);
		strcpy(colunaa, colunac);
		linha = atoi(linhaof);
		coluna = atoi(colunaa);
    if(linha == 0 || coluna == 0 || linha == 11 || coluna == 11){
 printf("Local inv�lido, tente novamente.\n");
}else{
    vez10 = 0;
	if(tabuleiro[linha][coluna] == '1' || tabuleiro[linha][coluna] == '@'|| tabuleiro[linha][coluna] == '#' || tabuleiro[linha][coluna] == '2'){
	  tabuleiro[linha][coluna] = '.';
	  printf("Soldado abatido. Na casa %d %d\n", linha, coluna);
	  system("pause");	
	}
	if(tabuleiro[linha + 1][coluna] == '1' || tabuleiro[linha + 1][coluna] == '@'|| tabuleiro[linha + 1][coluna] == '#' || tabuleiro[linha + 1][coluna] == '2'){
	  tabuleiro[linha + 1][coluna] = '.';
	  printf("Soldado abatido. Na casa %d %d\n", linha + 1, coluna);	
	system("pause");
	}
	if(tabuleiro[linha - 1][coluna] == '1' || tabuleiro[linha - 1][coluna] == '@'|| tabuleiro[linha - 1][coluna] == '#' || tabuleiro[linha - 1][coluna] == '2'){
	  tabuleiro[linha - 1][coluna] = '.';
	  printf("Soldado abatido. Na casa %d %d\n", linha - 1, coluna);
	  system("pause");	
	}
	if(tabuleiro[linha][coluna + 1] == '1' || tabuleiro[linha][coluna + 1] == '@'|| tabuleiro[linha][coluna+ 1] == '#' || tabuleiro[linha][coluna+ 1] == '2'){
	  tabuleiro[linha][coluna + 1] = '.';
	
	  printf("Soldado abatido. Na casa %d %d\n", linha, coluna + 1);
	  system("pause");
	}
	if(tabuleiro[linha][coluna - 1] == '1' || tabuleiro[linha][coluna - 1] == '@'|| tabuleiro[linha][coluna - 1] == '#' || tabuleiro[linha][coluna - 1] == '2'){
	  tabuleiro[linha][coluna - 1] = '.';
	  printf("Soldado abatido. Na casa %d %d\n", linha, coluna - 1);
		system("pause");
	}
}

}
    }
	//averiguar a vitoria do jogador SUL
	soldN = 0;
	for(i=1; i <= 4; i++){
			for(j=1; j <= 10; j++){
				if(tabuleiro[i][j] != '.' && tabuleiro[i][j] != '~' && tabuleiro[i][j] != '*'){
				soldN ++;
				}
			}
    
	}
	if(soldN == 0){
		vitoria = 1;
	}
	}
	if(acao == 'M' || acao == 'm'){
	printf("Voce escolheu movimentar.\nOBS: Soldados podem se movimentar apenas uma unidade. O soldado nao pode ocupar rios, montanhas, e outros soldados\n");
	vez2 = 1;
	vez3 = 0;
	printf("Digite F - para o soldado ir para frente.\nDigite T - para o soldado ir para tr�s.\nDigite E - para o soldado ir para esquerda\nDigite D - para o soldado ir para direita.\nDigite V - caso seu soldado esteja cercado, voc� passar� a vez para o inimigo.\n");
	scanf(" %c", &direcao);
	
	while(vez3 == 0){
	
	if(direcao == 'F' || direcao == 'f' ){
	  if(tabuleiro[linha - 1][coluna] == '.'){
	  	
	tabuleiro[linha - 1][coluna] = tabuleiro[linha][coluna];
	tabuleiro[linha][coluna] = '.';
	vez3 = 1;	
     } else{
     	printf("Posi��o inv�lida. Tente novamente:\n");
     	scanf(" %c", &direcao);
	 }
	} 
	if(direcao == 'T'  || direcao == 't'){
	if (tabuleiro[linha + 1][coluna] == '.'){
	
	    tabuleiro[linha + 1][coluna] = tabuleiro[linha][coluna];
		tabuleiro[linha][coluna] = '.';	
		vez3 = 1;	
		
	}
	else{
     	printf("Posi��o inv�lida. Tente novamente:\n");
     	scanf(" %c", &direcao);
	 }
}
	 
	if(direcao == 'E' || direcao == 'e' ){
	if(tabuleiro[linha] [coluna - 1] == '.'){
	 tabuleiro[linha][coluna - 1] = tabuleiro[linha][coluna];
		tabuleiro[linha][coluna] = '.';	
		vez3 = 1;	
		
	}
	else{
     	printf("Posi��o inv�lida. Tente novamente:\n");
     	scanf(" %c", &direcao);
	 }
}
	if(direcao == 'D' || direcao == 'd' ){
	if (tabuleiro[linha][coluna + 1] == '.'){
	
	tabuleiro[linha ][coluna + 1 ] = tabuleiro[linha][coluna];
	tabuleiro[linha][coluna] = '.';	
	vez3 = 1;	
		
	}
	else{
     	printf("Posi��o inv�lida. Tente novamente:\n");
     	scanf(" %c", &direcao);
	 }
}
	if( direcao == 'V'|| direcao == 'v'){
		vez3 = 1;
		
		
	}
} //while

	}// A��o M
 if(acao != 'A' && acao != 'a' && acao != 'M' && acao != 'm'){
	printf("A��o inv�lida.\n");	

	

	}
	}// While da a��o
	system("cls");

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
	
} // Sele��o do soldado
} // While vez normal

// Vez do Norte escolher
if(vitoria == 0){
printf("%s, Selecione o soldado que voce gostaria de interagir. Digite a posi��o dele, primeiro linha depois coluna:\nOBS:escolha tropas apenas do seu campo.(Norte)", jogadorN);
    vez = 0;
    vez2 = 0;
while(vez == 0){
	scanf(" %s %s", linhac, colunac);
		strcpy(linhaof, linhac);
		strcpy(colunaa, colunac);
		linha = atoi(linhaof);
		coluna = atoi(colunaa);
    	
if(tabuleiro[linha][coluna] == '.' || tabuleiro[linha][coluna] == '*' || tabuleiro[linha][coluna] == '~' || linha > 4){ 	
	printf("Local inv�lido. Tente novamente.\n");

}
else{
	while( vez2 == 0){
	printf("O que voc� gostaria de fazer?\nDigite A para atarcar ou M para movimentar\n "); 
	scanf(" %c", &acao);
	vez =1;
	
	if(acao == 'A' || acao == 'a'){
	printf("Voce escolheu atacar.\nOBS: FOGO AMIGO � POSS�VEL\n");
					vez2 = 1;
			
				 	if(tabuleiro[linha][coluna] =='1'){
						linha2 = linha + 1;
						acertar = 0;
			
						while(acertar == 0 && tabuleiro[linha2][coluna] != '*'){
				
		           			if(tabuleiro[linha2][coluna]  == '1' || tabuleiro[linha2][coluna]  == '2' || tabuleiro[linha2][coluna]  == '@'){
					           	tabuleiro[linha2][coluna] = '.';
					           	printf("Soldado abatido. na casa %d %d.\n", linha2, coluna);
					           	acertar = 1;
					           	system("pause");
							}
							else{
								linha2 ++;
							}
						}
					}
					if(tabuleiro[linha][coluna] == '2'){
						vez4 = 0;
						while(vez4 == 0){
							
								printf("O Sniper dever� atirar em qual dire��o?\n Digite E - para o Sniper atacar na diagonal esquerda.\n Digite D - para o Sniper atirar na diagonal direita.\n");
								scanf(" %c", &tiro);
								if( tiro == 'D' || tiro== 'd'){
								vez4 = 1;
								linha2 = linha + 1;
								coluna2 = coluna - 1;
								acertar = 0;
								while(acertar == 0 && tabuleiro[linha2][coluna2] != '*'){
								
						        	   if(tabuleiro[linha2][coluna2]  == '1' || tabuleiro[linha2][coluna2]  == '2' || tabuleiro[linha2][coluna2]  == '@'){
						           		tabuleiro[linha2][coluna2] = '.';
						    	       	printf("Soldado abatido. Na casa %d %d\n", linha2, coluna2);
						        	   	acertar = 1;
							           	system("pause");
									   }
									   else{
											linha2 ++;
									        coluna2 --;    
										}
								}
							}
							if( tiro == 'E' || tiro== 'e'){
								vez4 = 1;
								linha2 = linha + 1;
								coluna2 = coluna + 1;
								acertar = 0;
								while(acertar == 0 && tabuleiro[linha2][coluna2] != '*'){
							           if(tabuleiro[linha2][coluna2]  == '1' || tabuleiro[linha2][coluna2]  == '2' || tabuleiro[linha2][coluna2]  == '@'){
							           		tabuleiro[linha2][coluna2] = '.';
							           		printf("Soldado abatido. Na casa %d %d\n", linha2, coluna2);
							           		acertar = 1;
							           		system("pause");
									   }
									   else{
										linha2 ++;
							        	coluna2 ++;    
									   }
								}	
							}
							if( tiro != 'D' && tiro != 'd' && tiro != 'E'  && tiro != 'e'){
								printf("Dire��o inv�lida.\n");
							}
						}	
				}
					if(tabuleiro[linha][coluna] == '#'){
						printf("EMERALD SPLASH! NINGUEM NUNCA PODER� DESVIAR DELE!\n");
						linha2 = linha + 1;
						while( tabuleiro[linha2][coluna] != '*'){
			
	           				if(tabuleiro[linha2][coluna]  == '1' || tabuleiro[linha2][coluna]  == '2' || tabuleiro[linha2][coluna]  == '@'){
	           					tabuleiro[linha2][coluna] = '.';
	           					printf("Soldado abatido. Na casa %d %d\n", linha2, coluna);
	           					system("pause");
			   				}
								else{
									linha2 ++;
								}
						}
	    			}
			
			
			soldS = 0;
	for(i=7; i <= 10; i++){
			for(j=1; j <= 10; j++){
				if(tabuleiro[i][j] != '.' && tabuleiro[i][j] != '~' && tabuleiro[i][j] != '*'){
				soldS ++;
				}
			}
			
			}
			if(soldS == 0){
		vitoria = 1;
		
		
	}
	}
	if(acao == 'M'|| acao == 'm'){
	printf("Voce escolheu movimentar.\nOBS: Soldados podem se movimentar apenas uma unidade. O soldado nao pode ocupar rios, montanhas, e outros soldados\n");
	vez2 = 1;
	vez3 = 0;
	printf("Digite F - para o soldado ir para frente.\nDigite T - para o soldado ir para tr�s.\nDigite E - para o soldado ir para esquerda\nDigite D - para o soldado ir para direita.\nDigite V - caso seu soldado esteja cercado, voc� passar� a vez para o inimigo.\n");
	scanf(" %c", &direcao);
	
	while(vez3 == 0){
	
	if(direcao == 'F' || direcao == 'f' ){
	  if(tabuleiro[linha +1][coluna] == '.'){
	  	
	tabuleiro[linha + 1][coluna] = tabuleiro[linha][coluna];
	tabuleiro[linha][coluna] = '.';
	vez3 = 1;	
     } else{
     	printf("Posi��o inv�lida. Tente novamente:\n");
     	scanf(" %c", &direcao);
	 }
	} 
	if(direcao == 'T'  || direcao == 't'){
	if (tabuleiro[linha - 1][coluna] == '.'){
	
	    tabuleiro[linha - 1][coluna] = tabuleiro[linha][coluna];
		tabuleiro[linha][coluna] = '.';	
		vez3 = 1;	
		
	}
	else{
     	printf("Posi��o inv�lida. Tente novamente:\n");
     	scanf(" %c", &direcao);
	 }
}
	 
	if(direcao == 'E' || direcao == 'e' ){
	if(tabuleiro[linha] [coluna + 1] == '.'){
	 tabuleiro[linha][coluna + 1] = tabuleiro[linha][coluna];
		tabuleiro[linha][coluna] = '.';	
		vez3 = 1;	
		
	}
	else{
     	printf("Posi��o inv�lida. Tente novamente:\n");
     	scanf(" %c", &direcao);
	 }
}
	if(direcao == 'D' || direcao == 'd' ){
	if (tabuleiro[linha][coluna - 1] == '.'){
	
	tabuleiro[linha ][coluna - 1 ] = tabuleiro[linha][coluna];
	tabuleiro[linha][coluna] = '.';	
	vez3 = 1;	
		
	}
	else{
     	printf("Posi��o inv�lida. Tente novamente:\n");
     	scanf(" %c", &direcao);
	 }
}
	if( direcao == 'V'|| direcao == 'v'){
		vez3 = 1;
		
		
	}
} //while

	}// A��o M
 if(acao != 'A' && acao != 'a' && acao != 'M' && acao != 'm'){
	printf("A��o inv�lida.\n");	

	

	}
	}// While da a��o
	system("cls");

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
	
	
}
}
}
}
}
if(soldN ==0){
	printf("%s VOC� CONQUISTOU A LAP�NIA!\n", jogadorS);
}
else{
	printf("%s VOC� CONQUISTOU A LAP�NIA!\n", jogadorN);
}
return 0;
}


