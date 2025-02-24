/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aursuare <aursuare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 14:08:18 by aursuare          #+#    #+#             */
/*   Updated: 2025/01/16 12:49:30 by aursuare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

long		input_is_correct(char *str);
int			is_dup(t_stack *column);
void		get_index(t_stack *stack_a, int size);
void		get_num(char *argv, t_stack **stack_a);
int			is_sorted(t_stack *stack);
void		sort(t_stack **stack_a, t_stack **stack_b);
void		sort_three(t_stack **stack);
t_stack		*stack_new(int value);
void		stack_add(t_stack **stack, t_stack *new);
t_stack		*get_bottom(t_stack *stack);
t_stack		*before_bottom(t_stack *stack);
int			get_stack_size(t_stack *stack);
void		cost(t_stack **stack_a, t_stack **stack_b);
void		cheapest_move(t_stack **stack_a, t_stack **stack_b);
void		move(t_stack **a, t_stack **b, int cost_a, int cost_b);
int			position_lowest_index(t_stack **stack);
void		get_target_pos(t_stack **stack_a, t_stack **stack_b);

void		pa(t_stack **stack_a, t_stack **stack_b);
void		pb(t_stack **stack_a, t_stack **stack_b);
void		sa(t_stack **stack_a);
void		sb(t_stack **stack_b);
void		ss(t_stack **stack_a, t_stack **stack_b);
void		rrb(t_stack **stack_b);
void		rra(t_stack **stack_a);
void		rrr(t_stack **stack_a, t_stack **stack_b);
void		ra(t_stack **stack_a);
void		rb(t_stack **stack_b);
void		rr(t_stack **stack_a, t_stack **stack_b);

void		free_stack(t_stack **stack);
void		is_error(t_stack **stack_a, t_stack **stack_b);
long int	ft_atoi(const char *str);
void		ft_putstr(char *str);
int			absolute(int nb);
size_t		ft_strlen(const char *str);
char		**ft_split(char const *str, char c);

#endif
