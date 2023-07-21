#include "../push_swap.h"

static int	get_max_bits(t_Stack **stack)
{
    t_Stack 	*tmp;
    int		max;
    int		max_bits;

    tmp = (*stack);
    max = tmp->i;
    max_bits = 0;
    while (tmp)
    {
        if (tmp->i > max)
            max = tmp->i;
        tmp = tmp->next;
    }
    while ((max >> max_bits) != 0)
        max_bits++;
    return (max_bits);
}

void	radix_sort(t_Stack **stacka, t_Stack **stackb)
{
    t_Stack	*tmp;
    int		i;
    int		j;
    int		size;
    int		max_bits;

    i = 0;
    tmp = (*stacka);
    size = ft_size(&tmp);
    max_bits = get_max_bits(stacka);
    while (i < max_bits)
    {
        j = 0;
        while (j++ < size)
        {
            tmp = *stacka;
            if (((tmp->i >> i) & 1) == 1)
                ra(stacka, 0);
            else
                pb(stacka, stackb);
        }
        while (ft_size(stackb) != 0)
            pa(stacka, stackb);
        i++;
    }
}

int ishalf(t_Stack **stacka, int value)
{
    t_Stack *temp;
    int half;
    int i;

    temp = (*stacka);
    half = (ft_size(stacka) / 2);
    i = 0;
    while (temp != NULL && temp->value != value)
    {
        temp = temp->next;
        i++;
    }
    if(i > half)
        return (0);
    return (1);
}
