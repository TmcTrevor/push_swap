/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_instructions2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhames <mokhames@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:51:54 by mokhames          #+#    #+#             */
/*   Updated: 2021/09/26 14:55:26 by mokhames         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	swap_menu(char *ins, t_stack **a, t_stack **b)
{
	ft_msg(ins);
	if (!ft_strcmp(ins, "sa"))
		execute_swap(a);
	else if (!ft_strcmp(ins, "sb"))
		execute_swap(b);
	else if (!ft_strcmp(ins, "ss"))
	{
		execute_swap(a);
		execute_swap(b);
	}
	else
		return (0);
	return (1);
}

int	push_menu(char *ins, t_stack **a, t_stack **b)
{
	ft_msg(ins);
	if (!ft_strcmp(ins, "pb"))
		execute_push(a, b);
	else if (!ft_strcmp(ins, "pa"))
		execute_push(b, a);
	else
		return (0);
	return (1);
}

int	reverse_front_menu(char *ins, t_stack **a, t_stack **b)
{
	ft_msg(ins);
	if (!ft_strcmp(ins, "rra"))
	{
		if (ft_lstsize1(*a) > 1)
			move_lfront(a);
	}
	else if (!ft_strcmp(ins, "rrb"))
	{
		if (ft_lstsize1(*b) > 1)
			move_lfront(b);
	}
	else if (!ft_strcmp(ins, "rrr"))
	{
		if (ft_lstsize1(*a) > 1)
			move_lfront(a);
		if (ft_lstsize1(*b) > 1)
			move_lfront(b);
	}
	else
		return (0);
	return (1);
}

int	reverse_back_menu(char *ins, t_stack **a, t_stack **b)
{
	ft_msg(ins);
	if (!ft_strcmp(ins, "ra"))
	{
		if (ft_lstsize1(*a) > 1)
			move_lback(a);
	}
	else if (!ft_strcmp(ins, "rb"))
	{
		if (ft_lstsize1(*b) > 1)
			move_lback(b);
	}
	else if (!ft_strcmp(ins, "rr"))
	{
		if (ft_lstsize1(*a) > 1)
			move_lback(a);
		if (ft_lstsize1(*b) > 1)
			move_lback(b);
	}
	else
		return (0);
	return (1);
}
