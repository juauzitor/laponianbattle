#include <stdio.h>
#include "canvas.h"
#include "stack.h"
#include "pieces.h"
#define NAME 200


void positioning_pieces(tp_board *b){
    tp_stack first_player_pieces, second_player_pieces;
    int line, row;
    add_pieces(&first_player_pieces, &second_player_pieces);

    while(!(empty_stack(&first_player_pieces) && empty_stack(&second_player_pieces))){
        printf("linha\n");
        scanf("%d\n", &line);
        printf("coluna\n");
        scanf("%d\n", &row);
        
    }
}

int main(int argc, char *argv[]){
    tp_board game_board;
    char first_player[NAME], second_player[NAME];

    printf("Nome do primeiro jogador: ");
    scanf(" %[^\n]s", first_player);
    printf("Nome do segundo jogador: ");
    scanf(" %[^\n]s", second_player);

    start_board(&game_board);
    print_board(&game_board);
    positioning_pieces(&game_board);
    clear();
    print_name(first_player, second_player);
    print_board(&game_board);
    pause();

    return 0;
}
