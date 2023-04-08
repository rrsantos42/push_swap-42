#include "../push_swap.h"

void organiozelstA(t_listA** stackA)
{
    while((*stackA)->preview)
        (*stackA) = (*stackA)->preview;
}
void organiozelstB(t_listB** stackB)
{
    while((*stackB)->preview)
        (*stackB) = (*stackB)->preview;
}