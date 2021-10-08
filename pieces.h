#include <stdio.h>

/*
typedef char tp_item;

typedef struct {
    tp_item soldier;
}tp_soldier;

typedef struct {
    tp_item archer;
}tp_soldier;

typedef struct {
    tp_item emerald_splash;
    tp_item magicians_red;
}tp_stand;
*/

void add_pieces(tp_stack *p1, tp_stack *p2){
    char ps1[5]={'1', '1', '2', '2', '#'};
    char ps2[5]={'1', '1', '2', '2', '@'};
    start_stack(p1);
    start_stack(p2);
    for (int i = 0; i < 5; i++) {
        push(p1, ps1[i]);
        push(p2, ps2[i]);
    }
}
