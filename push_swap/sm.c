#include "push_swap.h"

void    sa(t_listA** stackA)
{
    int x;
    organiozelstA(&(*stackA));
    x = (*stackA)->value;
    (*stackA)->value = (*stackA)->next->value;
    (*stackA)->next->value = x;
    ft_putstr_fd("sa\n", 1);
}

void    sb(t_listB** stackB)
{
    int x;

    organiozelstB(&(*stackB));
    x = (*stackB)->value;
    (*stackB)->value = (*stackB)->next->value;
    (*stackB)->next->value = x;
    ft_putstr_fd("sa\n", 1);
}

void ss(t_listA** stackA, t_listB** stackB)
{
    sa(&(*stackA));
    sb(&(*stackB));
}