#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "libft/libft.h"


typedef struct s_Stack
{
    int			value;
    struct s_Stack *head;
    struct s_Stack	*next;

}	t_Stack;


int main(int ac, char** av);
void pb(t_Stack **stacka, t_Stack **stackb);
void pa(t_Stack **stacka, t_Stack **stackb);
void sa(t_Stack **stack, int flag);
void sb(t_Stack **stack, int flag);
void    ss(t_Stack **stacka, t_Stack **stackb);
void ra(t_Stack **stack, int flag);
void rb(t_Stack **stack, int flag);
void    rr(t_Stack **stacka, t_Stack **stackb);
#endif