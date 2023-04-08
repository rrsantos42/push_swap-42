#include "../push_swap.h"


int issorted(t_listA** stackA)
{
    while((*stackA) ->preview->preview)
    {
        if((*stackA)->preview->value < (*stackA)->preview->preview-> value)
            return (0);
        (*stackA) = (*stackA)->preview;
    }
    return (1);
}