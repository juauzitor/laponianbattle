// Carlos Henrique Racobaldo Luz Montes, Fernando Antônio Marques Schettini, Francielle Andrade Cardoso, João Vitor Mendes Pinto dos Santos

#include <stdio.h>
#include "canvas.h"
#include "stack.h"
#include "queue.h"
#include "pieces.h"
#include "rules.h"
#define NAME 200

int main(int argc, char *argv[]){
    tp_board game_board;
    tp_stack first_player_pieces, second_player_pieces;
    tp_queue q1;
    char first_player[NAME], second_player[NAME];
    start_stack(&first_player_pieces);
    start_stack(&second_player_pieces);
    start_queue(&q1);
    start_turn(&q1);
    start_board(&game_board);
    add_pieces(&first_player_pieces, &second_player_pieces);

    printf("Nome do primeiro jogador: ");
    scanf(" %[^\n]s", first_player);
    printf("Nome do segundo jogador: ");
    scanf(" %[^\n]s", second_player);
    print_board(&game_board);
    alloc_unit(&first_player_pieces, &second_player_pieces, &game_board, &q1);
    clear();
    print_name(first_player, second_player);
    print_board(&game_board);
    pause();

    return 0;
}
