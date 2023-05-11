#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "libft/libft.h"
#include <limits.h>


typedef struct s_Stack
{
    int			value;
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
void    rr(t_Stack **stacka, t_Stack **stackb, int flag);
void rra(t_Stack **stack, int flag);
void rrb(t_Stack **stack, int flag);
void rrr(t_Stack **stacka, t_Stack **stackb, int flag);
t_Stack *Makelist(char** av, int size);
int CheackValues(char** av, int ac);
void FreeList(t_Stack **list);
int isOrganized(t_Stack **lst);
void twoInputs(t_Stack **list);
void threeInputs(t_Stack **stacka);
void fourInputs(t_Stack **stacka, t_Stack **stackb);
int CheackSameValues(t_Stack **list);
void Tinputs(t_Stack **stacka,t_Stack **stackb);
void FiveInputs(t_Stack **stacka, t_Stack **stackb);
t_Stack *findSmall(t_Stack **list);
void mainAlgo(t_Stack **stacka, t_Stack **stackb);
int MakeAverage(t_Stack **stacka);
int size(t_Stack **stacka);
void check_nei(t_Stack **stacka, t_Stack **stackb);
int closest(t_Stack **stacka, t_Stack **stackb);
int ishalf(t_Stack **stacka);

#endif