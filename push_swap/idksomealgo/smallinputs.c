#include "../push_swap.h"

void twoInputs(t_Stack **list)
{
    if(isOrganized(list))
        return ;
        ra(list, 1);
}

void threeInputs(t_Stack **stacka)
{
    if(isOrganized(stacka))
        return;
    if((*stacka)->value < (*stacka)->next->value)
    {
        if((*stacka)->value < (*stacka)->next->next->value)
        {
            sa(stacka, 1);
            ra(stacka, 1);
        }
        else
            rra(stacka, 1);
    }
    else if((*stacka)->next->value > (*stacka)->next->next->value)
    {
        sa(stacka, 1);
        rra(stacka, 1);
    }
    else if((*stacka)->value < (*stacka)->next->next->value)
        sa(stacka, 1);

    else
        ra(stacka, 1);
}

void fourInputs(t_Stack **stacka, t_Stack **stackb)
{
    if(isOrganized(stacka))
        return ;
    t_Stack *temp;
    t_Stack *small;

    temp = (*stacka);
    small = findSmall(stacka);
    while (temp)
    {
        if(temp->value == small->value)
        {
            pb(stacka, stackb);
            break;
        }
        ra(stacka, 1);
        temp = (*stacka);
    }

    threeInputs(stacka);
    pa(stacka, stackb);
}

void FiveInputs(t_Stack **stacka, t_Stack **stackb)
{
    if(isOrganized(stacka))
        return;

    t_Stack *small;

    small = findSmall(stacka);
    if((*stacka)->value == small->value ||(*stacka)->next->value == small->value)
    {
        while ((*stacka)->value != small->value)
            ra(stacka, 1);
    }
    else
        while ((*stacka)->value != small->value)
            rra(stacka, 1);
    pb(stacka, stackb);
    small = findSmall(stacka);
    if((*stacka)->value == small->value ||(*stacka)->next->value == small->value)
    {
        while ((*stacka)->value != small->value)
            ra(stacka, 1);
    }
    else
        while ((*stacka)->value != small->value)
            rra(stacka, 1);
    pb(stacka, stackb);

    threeInputs(stacka);
    pa(stacka, stackb);
    pa(stacka, stackb);


}