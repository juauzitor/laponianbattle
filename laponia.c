#include <stdio.h>
#include "canvas.h"
#define MAX 200


int main(int argc, char *argv[]){
    tp_board game_board;
    char first_player[MAX], second_player[MAX];

    printf("Nome do primeiro jogador: ");
    scanf(" %[^\n]s", first_player);
    printf("Nome do segundo jogador: ");
    scanf(" %[^\n]s", second_player);

    start_board(&game_board);
    print_board(&game_board);
    clear();
    print_name(first_player, second_player);
    print_board(&game_board);
    pause();

    return 0;
}
