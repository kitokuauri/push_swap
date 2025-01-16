/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:44:19 by aursuare          #+#    #+#             */
/*   Updated: 2025/01/09 18:00:42 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void get_position(t_stack **stack)
{
    t_stack *tmp;
    int     i;

    tmp = *stack;
    i = 0;
    while (tmp)
    {
        tmp->pos = i;
        tmp = tmp->next;
        i++;
    }
}

static int  get_target(t_stack **stack_a, int indez_b, int target_i, int target)
{
    t_stack *tmp;

    tmp = *stack_a;
    while (tmp)
    {
        if (tmp->indez > index_b && tmp->index < target_i)
        {
            target_i = tmp->index;
            target = tmp->pos;
        }
        tmp = tmp->next;
    }
    if (target_i != INT_MAX)
        return (target);
    tmp = *stack_a;
    while (tmp)
    {
        if (tmp->index < target_i)
        {
            target_i = tmp->index;
            target = tmp->pos;
        }
        tmp = tmp->next;
    }
    return (target);
}

int position_lowest_index(t_stack **stack)
{
    t_stack *tmp;
    int     lowest_i;
    int     lowest_p;

    tmp = *stack;
    lowest_i = INT_MAX;
    get_position(stack);
    lowest_p = tmp->pos;
    while (tmp)
    {
        if (tmp->index < lowest_i)
        {
            lowest_i = tmp->index;
            lowest_p = tmp->pos;
        }
        tmp = tmp->next;
    }
    return (lowest_p);
}

void    get_target_pos(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *tmp;
    int     target;

    tmp = *stack_b;
    get_position(stack_a);
    get_position(stack_b);
    target = 0;
    while (tmp)
    {
        target = get_target(stack_a, tmp->index, INT_MAX, target);
        tmp->target = target;
        tmp = tmp->next;
    }
}