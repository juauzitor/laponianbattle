#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctime>
#include <locale.h>

// Variáveis definidas
    #define LINHAS 12
    #define COLUNAS 12

// Variaveis mutáveis
    int especialN=1, especialS=1;
    char jogadorN[200]="chadnorte";
	char jogadorS[200]="virginsul";


// Tabuleiro
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

// Limpa a tela e imprime o tabuleiro
void imprimirtab(void){

    int i, j;

	system("cls");
    system("clear");
    printf("Norte:%s\n", jogadorN);
	printf("Sul:%s\n", jogadorS);

	for(i=0; i<LINHAS; i++){
		for(j=0; j<COLUNAS; j++){
			if(tabuleiro[i][j]=='.'){
                printf ("  ");
            }
			else{
				printf("%c ", tabuleiro[i][j]);
			}
		}
		printf("\n");
	}
}

// função para ler o tabuleiro e localizar as peças e contar as peças
int vitoria(int valor){
    int i, j ,n=0, s=0;
    int x[2];
    for (i = 1; i <= 4; i++) {
        for(j = 1; j <= 10; j++){
            if (tabuleiro[i][j] != '.'){
                n++;
            }
        }
    }
    for (i = 10; i >= 7; i--) {
        for(j = 1; j <= 10; j++){
            if (tabuleiro[i][j] != '.'){
                s++;
            }
        }
    }
    if (valor == 0){
        return n;
    }
    else{
        return s;
    }
}

// adiciona soldados no tabuleiro
void addsold(int jog){
    char soldado;
    int rept = 0, linha, coluna;

    if (jog==0){
        printf("%s, Escolha o tipo de soldado que você quer agora. Digite o número:\n1 - Soldado que atira em linha reta.\n2 - Soldado que atira em diagonal.\n# - Soldado ESPECIAL, que só pode ser colocado UMA vez, Emerald Splash! seu poder é um ataque poderoso em linha reta, que ultrapassa e destroi tudo que toca.\n", jogadorN);
    }
    else {
        printf("%s, Escolha o tipo de soldado que você quer agora. Digite o número:\n1 - Soldado que atira em linha reta.\n2 - Soldado que atira em diagonal.\n@ - Soldado ESPECIAL, que só pode ser colocado UMA vez, Magicians Red! seu poder é um ataque poderoso em cruz, 3x3 que queima os inimigos na área.\n", jogadorS);
    }

    scanf(" %c", &soldado);

    if (jog == 0 && (soldado == '1' || soldado == '2' || soldado == '#' && especialN == 1)){
        while (rept == 0){
            printf("%s, digite a posição da sua %c° peça, indique a linha e em seguida a coluna:\n", jogadorN, soldado);
            scanf("%d %d", &linha, &coluna);

            if(tabuleiro[linha][coluna] == '.' && linha <= 4){
                tabuleiro[linha][coluna]=soldado;
                rept = 1;
                if(soldado == '#'){
                    printf("ta preso aqui?\n");
                    especialN = 0;
                    }
                }
                else{
                    printf("Local inválido tente novamente\n");
                }
        }
    }
    else if (jog == 1 && (soldado == '1' || soldado == '2' || soldado == '@' && especialS == 1)){
        while (rept == 0){
            printf("%s, digite a posição da sua %c° peça, indique a linha e em seguida a coluna:\n", jogadorS, soldado);
            scanf("%d %d", &linha, &coluna);

            if(tabuleiro[linha][coluna] == '.' && linha >= 7){
                tabuleiro[linha][coluna]=soldado;
                rept = 1;
                if(soldado == '@'){
                    especialS = 0;
                    }
                }
                else{
                    printf("Local inválido tente novamente\n");
                }
        }
    }
    else{
        printf("Soldado inválido tente novamente\n");
        addsold(jog);
    }
}

void atk(int lin, int col){
    if(acao == 'A' || acao == 'a'){
	printf("Voce escolheu atacar.\n OBS: FOGO AMIGO É POSSÍVEL\n");
	vez2 = 1;

	if(tabuleiro[linha][coluna] =='1'){
	linha2 = linha + 1;
	acertar = 0;



	while(acertar == 0 && tabuleiro[linha2][coluna] != '*'){

           if(tabuleiro[linha2][coluna]  == '1' || tabuleiro[linha2][coluna]  == '2' || tabuleiro[linha2][coluna]  == '@'){
           	tabuleiro[linha2][coluna] = '.';
           	printf("Soldado abatido.\n");
           	acertar = 1;
           	system("pause");
		   }else{

		linha2 ++;

	}
	}


	}
	if(tabuleiro[linha][coluna] == '2'){
	vez4 = 0;
	while(vez4 == 0){

	printf("O Sniper deverá atirar em qual direção?\n Digite E - para o Sniper atacar na diagonal esquerda.\N Digite D - para o Sniper atirar na diagonal direita.\n");
	scanf(" %c", &tiro);
	if( tiro == 'D' || tiro== 'd'){
	vez4 = 1;
	linha2 = linha + 1;
	coluna2 = coluna - 1;
	acertar = 0;
	while(acertar == 0 && tabuleiro[linha2][coluna] != '*'){

           if(tabuleiro[linha2][coluna2]  == '1' || tabuleiro[linha2][coluna2]  == '2' || tabuleiro[linha2][coluna2]  == '@'){
           	tabuleiro[linha2][coluna2] = '.';
           	printf("Soldado abatido.\n");
           	acertar = 1;
           	system("pause");
		   }else{

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
	while(acertar == 0 && tabuleiro[linha2][coluna] != '*'){

           if(tabuleiro[linha2][coluna2]  == '1' || tabuleiro[linha2][coluna2]  == '2' || tabuleiro[linha2][coluna2]  == '@'){
           	tabuleiro[linha2][coluna2] = '.';
           	printf("Soldado abatido.\n");
           	acertar = 1;
           	system("pause");
		   }else{

		linha2 ++;
        coluna2 ++;
	}


	}

	if( tiro != 'D' && tiro != 'd' && tiro != 'E'  && tiro != 'e'){
	printf("Direção inválida.\n");

	}
}

	}
	if(tabuleiro[linha][coluna] == '#'){
	printf("EMERALD SPLASH! NINGUEM NUNCA PODERÁ DESVIAR DELE!\n");
	linha2 = linha + 1;
	while( tabuleiro[linha2][coluna] != '*'){

           if(tabuleiro[linha2][coluna]  == '1' || tabuleiro[linha2][coluna]  == '2' || tabuleiro[linha2][coluna]  == '@'){
           	tabuleiro[linha2][coluna] = '.';
           	printf("Soldado abatido.\n");
           	system("pause");
		   }else{

		linha2 ++;

	}
}

int main(){
    int vez=0, peca=4, firstp=0;
    imprimirtab();

    // Loop para adicionar as peças no tabuleiro
    for(vez = vez + firstp; vez<peca+firstp; vez++){
        addsold(vez%2);
        imprimirtab();
    }

    //Acabou os posicionamentos de tropa, agora é a movimentacao e ataque.
    printf("Todas as tropas foram posicionadas, quem vai vencer?\nO jogador tem 2 opções, movimentar ou atacar.\n");
    system("pause")
    while(vitoria(0)!= 0 || vitoria(1)!= 0){
        if(firstp==0){
            printf("%s, Selecione o soldado que voce gostaria de interagir. Digite a posição dele, primeiro linha depois coluna:\nOBS:escolha tropas apenas do seu campo.(Norte)", jogadorN);
        }
        else{

        }
    }

    printf("sla\n");
//    printf(" Norte %d Sul %d\n", vitoria(0), vitoria(1));
    return 0;
}
