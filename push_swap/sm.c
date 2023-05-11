#include "push_swap.h"

void sa(t_Stack **stack, int flag)
{
    if(!(*stack) || !(*stack)->next)
        return ;
    t_Stack *temp;
    t_Stack *temp2;
    temp2 = (*stack)->next->next;
    temp = (*stack);
    (*stack) = (*stack)->next;
    (*stack)->next = temp;
    (*stack)->next->next = temp2;
    if(flag)
        ft_putstr_fd("sa\n", 1);}

void sb(t_Stack **stack, int flag)
{
    if(!(*stack) || !(*stack)->next)
        return ;
    t_Stack *temp;
    t_Stack *temp2;
    temp2 = (*stack)->next->next;
    temp = (*stack);
    (*stack) = (*stack)->next;
    (*stack)->next = temp;
    (*stack)->next->next = temp2;
    if(flag)
        ft_putstr_fd("sb\n", 1);
}

void    ss(t_Stack **stacka, t_Stack **stackb)
{
    sa(stacka, 0);
    sb(stackb, 0);
    ft_putstr_fd("sb\n", 1);
}