#include "../push_swap.h"

int MakeAverage(t_Stack **stacka)
{
    long int size;
    long int result;
    t_Stack *temp;

    result = 0;
    temp = (*stacka);
    size = 0;
    while (temp)
    {
        size++;
        result += temp->value;
        temp = temp->next;
    }
    return (result / size);
}
