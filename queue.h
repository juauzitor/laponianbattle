#include <stdio.h>
#define MAX 100

typedef int tp_item;

typedef struct {
    tp_item item[MAX];
    int start, end;
    // int range;
}tp_queue;

void start_queue(tp_queue *f){
    f->start = f->end = MAX-1;
    //f->range=0;
}

int empty_queue(tp_queue *f){
    if(f->start == f->end) return 1;
    return 0;
}

int next(int pos){
    if(pos==MAX-1) return 0;
    return ++pos;
}
int full_queue(tp_queue *f){
    if(next(f->end)==f->start)
        return 1;
    return 0;
}
int insert_queue(tp_queue *f, tp_item e){
    if(full_queue(f))
        return 0;
    f->end = next(f->end);
    f->item[f->end]=e;
    //f->tam++;
    return 1;
}

int remove_queue (tp_queue *f, tp_item *e){
    if(empty_queue(f))
        return 0;
    f->start = next(f->start);
    *e= f->item[f->start];
    //f->tam--;
    return 1;
}

void print_queue (tp_queue f){
    tp_item e;
    while(!empty_queue(&f)){
        remove_queue(&f, &e);
        printf("\n%d", e);
    }
}

int first_queue_size(tp_queue f){
    int cont=0;
    tp_item e;
    while(!empty_queue(&f)){
        remove_queue(&f, &e);
        cont++;
    }
    return cont;
}
int second_queue_size(tp_queue f){
    int cont=0;
    tp_item e;
    while(!empty_queue(&f)){
        remove_queue(&f, &e);
        cont++;
    }
    return cont;
}
