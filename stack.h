#include <stdio.h>
#define MAX 100

typedef int
    tp_item;

typedef struct {
    int top;
    tp_item item[MAX];
} tp_stack;

void start_stack(tp_stack *p){
    p->top = -1;
}

int empty_stack(tp_stack *p){
    if (p->top == -1) return 1;
    return 0;
}

int full_stack(tp_stack *p){
    if (p->top == MAX-1) {
        return 1;        
    } else {
        return 0;
    }
}

int push(tp_stack *p, tp_item e){
    if(full_stack(p)==1) return 0;
    p->top++;
    p->item[p->top]=e;
    return 1;
}

int pop(tp_stack *p, tp_item *e){
    if(empty_stack(p)) return 0;
    *e=p->item[p->top];
    p->top--;
    return 1;
}

int top(tp_stack *p, tp_item *e){
    if(empty_stack(p)) return 0;
    *e=p->item[p->top];
    return 1;
}

void stack_up(tp_stack *pp, tp_stack *pu){
    tp_item e;
    while(!empty_stack(pp)){
        pop(pp, &e);
        push(pu, e);
    }
}

void print_stack(tp_stack p){
    tp_item e;
    while(!empty_stack(&p)){
        pop(&p, &e);
        printf("%d ", e);
    }
}
