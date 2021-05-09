#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctime>
#include "mfunc.h"


int main(int argc, char** argv){
	int i,j,x;
	srand(time(NULL));
	x= rand() % 100;
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
	
    pause();
    clear();	
	
	printf("Norte:%s\n", jogadorN);
	printf("Sul:%s\n", jogadorS);
    
    impressao();    
	
	return 0;
}
