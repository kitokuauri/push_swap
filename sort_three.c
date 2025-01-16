/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:44:19 by aursuare          #+#    #+#             */
/*   Updated: 2025/01/09 18:00:42 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int  biggest_index(t_stack *stack)
{
    int i;

    i = stack->index;
    while (stack)
    {
        if (stack->index > i)
            i = stack->index;
        stack = stack->next;
    }
    return (i);
}

void    sort_three(t_stack **stack)
{
    int biggest;
    
    if (is_sorted(*stack))
        return ;
    biggest = biggest_index(*stack);
    if ((*stack)->index == biggest)
        ra(stack);
    else if ((*stack)->next->index == biggest)
        rra(stack);
    if ((*stack)->index > (*stack)->next->index)
        sa(stack);
}