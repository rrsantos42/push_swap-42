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
    t_Stack *temp;

    int i;
    i = 2;
    stacka = malloc(sizeof (t_Stack));
    stackb = malloc(sizeof (t_Stack));
    stackb->next = NULL;
    stacka->head = NULL;
    stacka->head = stacka;
    stacka->value = ft_atoi(av[1]);
    while (i < ac)
    {
        stacka->next = malloc(sizeof (t_Stack));
        stacka->next->value = ft_atoi(av[i]);
        stacka->next->head = stacka->head;
        stacka = stacka->next;
        stacka->next = NULL;
        i++;
    }

    temp = stacka->head;
    while (temp)
    {
        printf("stack A->%d\n", temp->value);
        temp = temp->next;
    }
    temp = stackb->head;
    while (temp)
    {
        printf("stack b->%d\n", temp->value);
        temp = temp->next;
    }
    return (0);
}