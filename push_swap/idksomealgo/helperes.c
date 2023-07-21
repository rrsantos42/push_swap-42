#include "../push_swap.h"

int indexlist(t_Stack **stack, int value)
{
    int index;
    t_Stack *temp;

    index = 0;
    temp = (*stack);

    while(temp && temp->value != value)
    {
        temp = temp->next;
        index++;
    }
    return (index);
}
int ft_size(t_Stack **stacka)
{
    int size;
    t_Stack *temp;

    temp = (*stacka);
    size = 0;
    while (temp)
    {
        size++;
        temp = temp->next;
    }
    return (size);
}

void printlist(t_Stack **stacka, t_Stack **stackb)
{
    t_Stack *temp;

    temp = (*stacka);
    while (temp)
    {
        printf("stack A->%d\n%d\n", temp->value, temp->i);
        temp = temp->next;
    }
    temp = (*stackb);
    while (temp)
    {
        printf("stack b->%d\n", temp->value);
        temp = temp->next;
    }

}

void stack_index(t_Stack **stack)
{
    t_Stack *head;
    t_Stack *temp;

    head = (*stack);
    temp = (*stack);

    while ((*stack))
    {
        while (temp)
        {
            if(temp->value < (*stack)->value)
                (*stack)->i += 1;
            temp = temp->next;
        }
        temp = head;
        (*stack) = (*stack)->next;
    }
    (*stack) = head;
}