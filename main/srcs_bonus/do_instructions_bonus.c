/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_instructions_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhames <mokhames@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 17:33:26 by mokhames          #+#    #+#             */
/*   Updated: 2021/09/27 10:32:49 by mokhames         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	execute_swap(t_stack **a)
{
	int	tmp;

	if (ft_lstsize1(*a) > 1)
	{
		tmp = (*a)->a;
		(*a)->a = (*a)->next->a;
		(*a)->next->a = tmp;
	}
}

void	execute_push(t_stack **a, t_stack **b)
{
	int	tmp;

	if (ft_lstsize1(*a) > 0)
	{
		tmp = (*a)->a;
		ft_lstadd_front1(b, new_stack(tmp));
		*a = delete_first(*a);
	}
}

int	execute_ins(char *ins, t_stack **a, t_stack **b)
{
	if (swap_menu(ins, a, b))
		return (0);
	else if (push_menu(ins, a, b))
		return (0);
	else if (reverse_front_menu(ins, a, b))
		return (0);
	else if (reverse_back_menu(ins, a, b))
		return (0);
	else
		ft_error("Wrong instruction\n");
	return (1);
}

void	do_instructions(t_stack **a, t_stack **b)
{
	int		i;
	char	*ins;

	i = 0;
	while (get_next_line(0, &ins) > 0)
	{
		execute_ins(ins, a, b);
		i++;
	}
}
