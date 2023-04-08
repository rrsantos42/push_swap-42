#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "libft/libft.h"

typedef struct s_listA
{
    int			value;
    struct s_listA	*next;
    struct s_listA	*preview;
}	t_listA;
typedef struct s_listB
{
    int			value;
    struct s_listB	*next;
    struct s_listB	*preview;
}	t_listB;

int main(int ac, char** av);
void createlist(int size, t_listA** stackA, char** values);
int issorted(t_listA** stackA);
void organiozelstA(t_listA** stackA);
void organiozelstB(t_listB** stackB);
void    sa(t_listA** stackA);
void    sb(t_listB** stackB);
void pa(t_listA** stackA, t_listB** stackB);
void pb(t_listA** stackA, t_listB** stackB);
void deletenodeA(t_listA** stackA);
void deletenodeB(t_listB** stackB);
void addnodeA(t_listA** stackA, int value);
void addnodeB(t_listB** stackB, int value);


#endif