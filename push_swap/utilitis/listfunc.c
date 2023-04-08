#include "../push_swap.h"

void createlist(int size, t_listA** stackA, char** values)
{
    int i;
    i = 1;
    while(i <= (size - 1))
    {
        (*stackA)->value = ft_atoi(values[i]);
        (*stackA)->next = malloc(sizeof (t_listA));
        (*stackA)->next->preview = (*stackA);
        (*stackA) = (*stackA)->next;
        i++;
    }
    (*stackA)->next = NULL;
    organiozelstA(&(*stackA));
}