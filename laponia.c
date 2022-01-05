// Carlos Henrique Racobaldo Luz Montes, Fernando Antônio Marques Schettini, Francielle Andrade Cardoso, João Vitor Mendes Pinto dos Santos

#include <stdio.h>
#include <string.h> // usando para testar os jogadores
//#include "canvas.h"
//#include "stack.h"
//#include "queue.h"
#include "pieces.h"
//#include "rules.h"
#define NAME 200

int main(int argc, char *argv[]){
    tp_player first;
    strcpy(first.name, "Joao");    
    printf("%s\n", first.name);


/*
    tp_board game_board;
    tp_stack first_player_pieces, second_player_pieces;
    tp_queue q1;
    int t, line, row;
    char first_player[NAME], second_player[NAME], option;
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
    while (1) {
        t = turn(&q1);
        printf("Você deseja atacar ou mover, digite a para ataque ou m para mover.\n");
        scanf(" %c", &option);
        printf("line\n");
        scanf("%d", &line);
        printf("row\n");
        scanf("%d", &row);
        if (t == 1) {
            if(option == 'm'){
                printf("Para qual direção:\n");
                scanf(" %c", &option);
                first_player_move_unit(&game_board, line, row, &option);
                pause();
            } else if(option == 'a'){

            } else {
                printf("Você jogou errado e perdeu a vez!\n");
                pause();
            }
        } else{
            if(option == 'm'){
                printf("Para qual direção:\n");
                scanf(" %c", &option);
                second_player_move_unit(&game_board, line, row, &option);
                pause();
            } else if(option == 'a'){

            } else {
                printf("Você jogou errado e perdeu a vez!\n");
                pause();
            }
        }
        clear();
        print_board(&game_board);
    }bin/
    */
    return 0;
}
