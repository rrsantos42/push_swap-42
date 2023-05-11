#include "../push_swap.h"


void mainAlgo(t_Stack **stacka, t_Stack **stackb)
{
    if(isOrganized(stacka))
        return ;
    int average;
    t_Stack *temp;
    temp = (*stacka);
    while(temp)
    {
        while (size(stacka) > 5)
        {
            average = MakeAverage(stacka);
            temp = (*stacka);
            if(temp->value < average)
                    pb(stacka, stackb);
            else
                ra(stacka, 1);
        }
            temp = temp->next;
    }
    FiveInputs(stacka, stackb);
    while ((*stackb))
        check_nei(stacka, stackb);

    if(ishalf(stacka))
    {
        while((*stacka) != findSmall(stacka))
            rra(stacka, 1);
    }
    else
    {
        while((*stacka) != findSmall(stacka))
            ra(stacka, 1);
    }


}
int closest(t_Stack **stacka, t_Stack **stackb)
{
    t_Stack *temp;
    t_Stack *checker;
    int closest;
    int difference;

    temp = (*stacka);
    checker = (*stackb);
    closest = temp->value;
    difference = INT_MIN;
    while (temp)
    {
        if(((checker->value - temp->value) > difference) && (temp->value - checker->value) > 0)
        {
            difference =checker->value - temp->value;
            closest = temp->value;
        }
        temp = temp->next;
    }
    return (closest);
}

void check_nei(t_Stack **stacka, t_Stack **stackb)
{
    t_Stack *temp;
    int nei;

    temp = (*stacka);
    nei = closest(stacka, stackb);

    while (temp && temp->value != nei)
    {
        ra(stacka, 1);
        temp = (*stacka);
    }
    pa(stacka, stackb);
}

int ishalf(t_Stack **stacka)
{
    t_Stack *temp;
    int half;
    int i;

    temp = (*stacka);
    half = (size(stacka) / 2);
    i = 0;
    while (temp != findSmall(stacka))
    {
        temp = temp->next;
        i++;
    }
    if(i > half)
        return (1);
    return (0);
}