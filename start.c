/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:44:19 by aursuare          #+#    #+#             */
/*   Updated: 2025/01/09 18:00:42 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long    input_is_correct(char *str)
{
    int i;

    i = 0;
    if ((str[i] == '-' || str[i] == '+') && (ft_strlen(str) > 1))
        i++;
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

int is_dup(t_stack *column)
{
    t_stack *tmp;
    t_stack *tmp2;

    tmp = column;
    while (tmp)
    {
        tmp2 = tmp->next;
        while (tmp2)
        {
            if (tmp->value == tmp2->value)
                return (1);
            tmp2 = tmp2->next;
        }
        tmp = tmp->next;
    }
    return (0);
}

void    get_index(t_stack *stack_a, int size)
{
    t_stack *ptr;
    t_stack *biggest;
    int     value;

    while (--size > 0)
    {
        ptr = stack_a;
        biggest = NULL;
        value = INT_MIN;
        while (ptr)
        {
            if (ptr->value == INT_MIN &&ptr->index == 0)
                ptr->index = 1;
            if (ptr->value > value && ptr->index == 0)
            {
                value = ptr->value;
                biggest = ptr;
                ptr = ptr->next;
            }
            else
                ptr = ptr->next;
        }
        if (biggest != NULL)
            biggest->index = size;
    }
}