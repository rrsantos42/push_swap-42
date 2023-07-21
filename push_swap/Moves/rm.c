#include "../push_swap.h"

void ra(t_Stack **stack, int flag)
{
    if(!(*stack) || !(*stack)->next)
        return ;

    t_Stack *temp;
    t_Stack *temp2;
    temp = (*stack);
    (*stack) = (*stack)->next;
    temp2 = (*stack);
    while (temp2->next)
       temp2 = temp2->next;
    temp2->next = temp;
    temp2->next->next = NULL;
    if(flag)
        ft_putstr_fd("ra\n", 1);

}

void rb(t_Stack **stack, int flag)
{
    if(!(*stack) || !(*stack)->next)
        return ;

    t_Stack *temp;
    t_Stack *temp2;
    temp = (*stack);
    (*stack) = (*stack)->next;
    temp2 = (*stack);
    while (temp2->next)
        temp2 = temp2->next;
    temp2->next = temp;
    temp2->next->next = NULL;
    if(flag)
        ft_putstr_fd("rb\n", 1);

}

void    rr(t_Stack **stacka, t_Stack **stackb, int flag)
{

    ra(stacka, 0);
    rb(stackb, 0);
    if(flag)
        ft_putstr_fd("rr\n", 1);
}

void rra(t_Stack **stack, int flag)
{
    if(!(*stack) || !(*stack)->next)
        return ;

    t_Stack *temp;
    t_Stack *temp2;
    temp = (*stack);
    temp2 = (*stack);
    while (temp2->next->next)
        temp2 = temp2->next;
    while (temp->next)
            temp = temp->next;
    temp->next = (*stack);
    (*stack) = temp;
    temp2->next = NULL;
    if(flag)
        ft_putstr_fd("rra\n", 1);

}

void rrb(t_Stack **stack, int flag)
{
    if(!(*stack) || !(*stack)->next)
        return ;

    t_Stack *temp;
    t_Stack *temp2;
    temp = (*stack);
    temp2 = (*stack);
    while (temp2->next->next)
        temp2 = temp2->next;
    while (temp->next)
        temp = temp->next;
    temp->next = (*stack);
    (*stack) = temp;
    temp2->next = NULL;
    if(flag)
        ft_putstr_fd("rrb\n", 1);

}
void rrr(t_Stack **stacka, t_Stack **stackb, int flag)
{
    if(!flag)
        ft_putstr_fd("rrr\n", 1);

    rra(stacka, 0);
    rrb(stackb, 0);

}