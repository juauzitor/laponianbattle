#include <stdio.h>

void start_turn(tp_queue *q){
    insert_queue(q, 1);
    insert_queue(q, 2);
}

tp_item turn(tp_queue *t){
    tp_item e;
    remove_queue(t, &e);
    insert_queue(t, e);
    return e;
}

void alloc_unit(tp_stack *p1, tp_stack *p2, tp_board *b, tp_queue *q){
    while (!empty_stack(p1) || !empty_stack(p2)) {
        int t = turn(q), line, row, e;
        printf("linha\n");
        scanf("%d\n", &line);
        printf("coluna\n");
        scanf("%d\n", &row);
        if (t == 1 && line < 6 && line > 1 && row > 0 && row < 12) {
            pop(p1, &e);
            b->board[line][row] = e;
            clear();
            print_board(b);
        } else if (t == 0 && line > 7 && line < 12 && row > 0 && row < 12){
            pop(p2, &e);
            b->board[line][row] = e;
            print_board(b);
        } else {
            printf("jogada ilegal\n");
        }
    }
}
