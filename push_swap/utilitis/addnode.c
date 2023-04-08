#include "../push_swap.h"

void addnodeA(t_listA** stackA, int value)
{

    (*stackA)->preview = malloc(sizeof (t_listA));
    (*stackA)->preview->next = ((*stackA));
    (*stackA)->preview->value = value;
    (*stackA)->preview->preview = NULL;
    organiozelstA(&(*stackA));
}

void addnodeB(t_listB** stackB, int value)
{

    (*stackB)->preview = malloc(sizeof (t_listB));
    (*stackB)->preview->next = ((*stackB));
    (*stackB)->preview->value = value;
    (*stackB)->preview->preview = NULL;
    organiozelstB(&(*stackB));

}