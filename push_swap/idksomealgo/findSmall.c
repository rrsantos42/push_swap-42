#include "../push_swap.h"

t_Stack *findSmall(t_Stack **list)
{
    t_Stack *temp;
    t_Stack *small;

    temp = (*list);
    small = (*list);


    while (temp)
    {
        if(temp->value < small->value)
            small = temp;
        else
            temp = temp->next;
    }
    return (small);
}

t_Stack *findbig(t_Stack **stacka)
{
    t_Stack *temp;
    t_Stack *big;
    temp = (*stacka);
    big = (*stacka);
    while (temp)
    {
        if(temp->value > big->value)
            big = temp;
        temp = temp->next;
    }
    return (big);
}