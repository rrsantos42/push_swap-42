#include "../push_swap.h"

int isOrganized(t_Stack **lst)
{
    t_Stack *temp;

    temp = (*lst);
    while (temp->next)
    {
        if((temp->value) <( temp->next->value))
            temp = temp->next;
        else
            return (0);

    }
    return (1);
}