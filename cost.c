/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:44:19 by aursuare          #+#    #+#             */
/*   Updated: 2025/01/09 18:00:42 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    cost(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *tmp_a;
    t_stack *tmp_b;
    int     size_a;
    int     size_b;

    tmp_a = *stack_a;
    tmp_b = *stack_b;
    size_a = get_stack_size(tmp_a);
    size_b = get_stack_size(tmp_b);
    while (tmp_b)
    {
        tmp_b->cost_b = tmp_b->pos;
        if (tmp_b->pos > size_b / 2)
            tmp_b->cost_a = (size_b - tmp_b->pos) * -1;
        tmp_b->cost_a = tmp_b->target;
        if (tmp_b->target > size_a /2)
            tmp_b->cost_a = (size_a - tmp_b->target) * -1;
        tmp_b = tmp_b->next;
    }
}

void    cheapest_move(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *tmp;
    int     cheapest;
    int     cost_a;
    int     cost_b;

    tmp = *stack_b;
    cheapest = INT_MAX;
    while (tmp)
    {
        if (absolute(tmp->cost_a) + absolute(tmp->cost_b) < cheapest)
        {
            cheapest = absolute(tmp->cost_a) + absolute(tmp->cost_b);
            cost_a = tmp->cost_a;
            cost_b = tmp->cost_b;
        }
        tmp = tmp->next;
    }
    move(stack_a, stack_b, cost_a, cost_b);
}