#include <stdio.h>
#include <stdlib.h>

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
