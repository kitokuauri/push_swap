/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:08:18 by aursuare          #+#    #+#             */
/*   Updated: 2025/01/09 17:37:08 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

void		get_num(char *argv, t_sack **stack_a);
int			is_sorted(t_stack *stack);

void		pa(t_stack **stack_a, t_stack **stack_b);
void		pb(t_stack **stack_a, t_stack **stack_b);
void		sa(t_stack **stack_a);
void		sb(t_stack **stack_b);
void		ss(t_stack **stack_a, t_stack **stack_b);

void		free_stack(t_stack **stack);
void		is_error(t_stack **stack_a, t_stack **stack_b);
long int	ft_atoi(const char *str);
void		ft_putstr(char *str);
int			absolute(int nb);

#endif
