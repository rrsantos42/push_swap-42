/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsantos <rsantos@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:15:29 by rsantos           #+#    #+#             */
/*   Updated: 2022/10/19 18:30:43 by rsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int main(int ac, char** av)
{
    t_Stack *stacka;
    t_Stack *stackb;
    CheackValues(av, ac);
    stacka = Makelist(av, ac);
    if(!(CheackSameValues(&stacka)))
    {
        printf("equal values\n");
        FreeList(&stacka);
        return (0);
    }
    stackb = NULL;
    if(isOrganized(&stacka))
    {
        ft_putstr_fd("its organized\n", 1);
        FreeList(&stacka);
        return (0);
    }
    stack_index(&stacka);
    if(ac == 3)
        twoInputs(&stacka);
    if(ac == 4)
        threeInputs(&stacka);
    if(ac == 5)
        fourInputs(&stacka, &stackb);
    if(ac > 5 && ac < 7)
        FiveInputs(&stacka, &stackb);
    else
      radix_sort(&stacka, &stackb);
    FreeList(&stacka);
    return (0);
}