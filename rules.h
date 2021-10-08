#include <stdio.h>
#include "queue.h"


tp_item turn(tp_queue *t){
    tp_item e;
    remove_queue(t, &e);
    insert_queue(t, e);
    return e;
}
