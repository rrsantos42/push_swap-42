#include "push_swap.h"

void pb(t_Stack **stacka, t_Stack **stackb)
{
    t_Stack *temp;
    temp = (*stackb)->head;
    (*stackb)->head = (*stacka)->head;
    (*stacka)->head = (*stacka)->head->next;
    (*stackb)->head->next = temp;
    ft_putstr_fd("pb\n", 1);


}
void pa(t_Stack **stacka, t_Stack **stackb)
{
    t_Stack *temp;
    temp = (*stacka)->head;
    (*stacka)->head = (*stackb)->head;
    (*stackb)->head = (*stackb)->head->next;
    (*stacka)->head->next = temp;
    ft_putstr_fd("pa\n", 1);

}