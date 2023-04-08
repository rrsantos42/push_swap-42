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
    t_listA *stackA;
    t_listB *stackB;

    stackB = malloc(sizeof (t_listB));
    stackA = malloc(sizeof (t_listA));
    stackA->preview = NULL;
    createlist(ac, &stackA, av);

    organiozelstA(&stackA);
    organiozelstB(&stackB);
    while (stackA->next)
    {
        printf("stack A->%d\n", stackA->value);
        stackA = stackA->next;
    }
    while (stackB->next)
    {
        printf("stack B->%d\n", stackB->value);
        stackB = stackB->next;
    }


    return (0);
}