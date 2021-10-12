#include <stdio.h>

typedef char tp_pieces;

typedef struct {
    tp_pieces unit;
}tp_unit;

char soldier_attack(int unit_line, int *unit_row, tp_board *b, int *player_turn, int *line){
    int n;
    char unit_type;
    if (*player_turn == 1) {
        n = unit_line;
        while(n == *line){
            unit_type = b->board[n][*unit_row];
            if (unit_type == '.'|| unit_type == '~' || unit_type == '*') {
                n++;
            } else {
                return unit_type;
            }
        }
    }
    else{
        n = *line;
        while(n == 0) {
            unit_type = b->board[n][*unit_row];
            if (unit_type == '.'|| unit_type == '~' || unit_type == '*') {
                n--;
            } else {
                return unit_type;
            }
        }
    }
    return '0';
}

char archer_attack(int unit_line, int *unit_row, tp_board *b, int *player_turn, int *line){
    return '0';
}

void add_pieces(tp_stack *p1, tp_stack *p2){
    char ps1[5]={'1', '1', '2', '2', '#'};
    char ps2[5]={'1', '1', '2', '2', '@'};
    for (int i = 0; i < 5; i++) {
        push(p1, ps1[i]);
        push(p2, ps2[i]);
    }
}
