#include <stdio.h>
#include <stdlib.h>

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

//    printf("Press any key to continue . . \n");
//    system("bash -c 'read -n1 -r -p '. . .' key'");
    
}
