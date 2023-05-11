#include "push_swap.h"

int CheackSameValues(t_Stack **list)
{
    t_Stack *temp;
    t_Stack *temp2;

    temp = (*list);
    temp2 = NULL;
    while (temp)
    {
        temp2 = temp->next;
        while (temp2)
        {
            if (temp->value == temp2->value)
            {
                return 0; // Found a duplicate, return 0
            }
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
    return (1);
}
int CheackValues(char** av, int ac)
{
    int i;
    int j;

    i = 1;
    j = 0;
    if (ac == 1)
        return (0);
    while(i < ac)
    {
        while(av[i][j])
        {
            if (av[i][j] >= '0' && av[i][j] <= '9')
            {
                j++;
            }
            else
                return (0);
        }
        j = 0;
        i++;
    }
    return (1);
}

t_Stack *Makelist(char** av, int size)
{
    t_Stack *stacka;
    t_Stack *temp;
    t_Stack *end;

    stacka = NULL;
    int i;
    i = 1;
    while (i < size)
    {
        temp = malloc(sizeof (t_Stack));
        temp->value = ft_atoi(av[i]);
        temp->next = NULL;
        if (!stacka)
            stacka = temp;
        else
            end->next = temp;
        end = temp;
        i++;

    }
    return (stacka);
}

void FreeList(t_Stack **list)
{
    t_Stack *temp;

    while((*list))
    {
        temp = (*list);
        (*list) = (*list)->next;
        free(temp);
    }
}