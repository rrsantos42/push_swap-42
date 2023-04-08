#include "push_swap.h"

void pa(t_listA** stackA, t_listB** stackB)
{
    organiozelstA(&(*stackA));
    organiozelstB(&(*stackB));
    addnodeA(&(*stackA), (*stackB)->value);
    deletenodeB(&(*stackB));
    (*stackA)->next->preview = (*stackA);
}

void pb(t_listA** stackA, t_listB** stackB)
{
    organiozelstA(&(*stackA));
    organiozelstB(&(*stackB));
    addnodeB(&(*stackB), (*stackA)->value);
    deletenodeA(&(*stackA));
    (*stackB)->next->preview = (*stackB);

}

