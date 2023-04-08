#include "../push_swap.h"


void deletenodeA(t_listA** stackA){
    (*stackA) = (*stackA)->next;
    free((*stackA)->preview);
    (*stackA)->preview = NULL;
}

void deletenodeB(t_listB** stackB){
    (*stackB) = (*stackB)->next;
    free((*stackB)->preview);
    (*stackB)->preview = NULL;
}