#include "push_swap.h"

void ra(t_Stack **stack, int flag)
{
    t_Stack *temp;
    t_Stack *temp2;
    temp = (*stack)->head;
    (*stack)->head = (*stack)->head->next;
    temp2 = (*stack)->head;
    while (temp2->next)
       temp2 = temp2->next;
    temp2->next = temp;
    temp2->next->next = NULL;
    if(flag)
        ft_putstr_fd("ra\n", 1);

}

void rb(t_Stack **stack, int flag)
{
    t_Stack *temp;
    t_Stack *temp2;
    temp = (*stack)->head;
    (*stack)->head = (*stack)->head->next;
    temp2 = (*stack)->head;
    while (temp2->next)
        temp2 = temp2->next;
    temp2->next = temp;
    temp2->next->next = NULL;
    if(flag)
        ft_putstr_fd("rb\n", 1);

}

void    rr(t_Stack **stacka, t_Stack **stackb)
{
    ra(stacka, 0);
    rb(stackb, 0);
    ft_putstr_fd("rr\n", 1);
}