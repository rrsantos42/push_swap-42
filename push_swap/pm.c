#include "push_swap.h"

void pb(t_Stack **stacka, t_Stack **stackb)
{
    t_Stack *temp;
    if(!(*stacka))
        return ;
    temp = (*stackb);
    (*stackb) = (*stacka);
    (*stacka) = (*stacka)->next;
    (*stackb)->next = temp;
    ft_putstr_fd("pb\n", 1);


}
void pa(t_Stack **stacka, t_Stack **stackb)
{
    t_Stack *temp;
    if(!(*stackb))
        return ;
    temp = (*stacka);
    (*stacka) = (*stackb);
    (*stackb) = (*stackb)->next;
    (*stacka)->next = temp;
    ft_putstr_fd("pa\n", 1);

}