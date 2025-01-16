/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 17:44:19 by aursuare          #+#    #+#             */
/*   Updated: 2025/01/09 18:00:42 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void rev_rotate(t_stack **stack)
{
    t_stack *tmp;
    t_stack *tail;
    t_stack *new_tail;

    tail = get_bottom(*stack);
    new_tail = before_bottom(*stack);
    tmp = *stack;
    *stack = tail;
    (*stack)->next = tmp;
    new_tail->next = NULL;
}

void    rrb(t_stack **stack_b)
{
    rev_rotate(stack_b);
    ft_putstr("rrb\n");
}

void    rrr(t_stack **stack_a, t_stack **stack_b)
{
    rev_rotate(stack_a);
    rev_rotate(stack_b);
    ft_putstr("rrr\n");
}