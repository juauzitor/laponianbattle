#include <stdio.h>
#include <stdlib.h>
#define  LINE 13
#define  ROW 13


// Funções para gerenciar o tabuleiro
typedef struct{
    char board[LINE][ROW];
} tp_board;

void start_board(tp_board *b){
    char scene[LINE][ROW]= {
        {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', ' ', ' '},
        {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' '},
        {'*', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*', '1'},
        {'*', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*', '2'},
        {'*', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*', '3'},
        {'*', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*', '4'},
        {'*', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~', '*', '5'},
        {'*', '~', '~', '~', '~', '~', '~', '~', '~', '~', '~', '*', '6'},
        {'*', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*', '7'},
        {'*', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*', '8'},
        {'*', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*', '9'},
        {'*', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '*', 'A'},
        {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' '}
    };

    for(int i=0; i<LINE; i++){
        for (size_t j = 0; j < ROW; j++) {
            b->board[i][j] = scene[i][j];
        }
    }

}

// Funções para gerenciar a tela

void print_board(tp_board *b){
    for(int i=0; i<LINE; i++){
        for(int j=0; j<ROW; j++){
            if(j==ROW-1){
                if(b->board[i][j]=='A'){
                    printf(" | 10 ");
                } else {
                printf(" | %c ", b->board[i][j]);
                }
            } else if(b->board[i][j] == '.'){
                printf("   ");
            } else{
                printf(" %c ", b->board[i][j]);
            }
        }
        printf("\n");
    }
}

void print_name(char *fp, char *sp){
    printf("Norte: %s\n", fp);
    printf("Sul: %s\n", sp);
}

void clear(void){
// Windows
    #ifdef WIN32
        system("cls");
// Linux/unix
    #else
        system("clear");
    #endif
}

void pause(void){
// Windows
    #ifdef WIN32
        system("pause");
// Linux/unix
    #else
        printf("Press any key to continue ..\n");
        system("bash -c 'read -n1 -r -p '...' key'");
    #endif
}
