/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhames <mokhames@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:08:19 by mokhames          #+#    #+#             */
/*   Updated: 2021/09/26 09:46:53 by mokhames         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	from_upa(t_data t, t_stack **a, t_stack **b)
{
	while (t.nbrinsa > 0)
	{
		reverse_back_menu("ra", a, b);
		t.nbrinsa--;
	}
	while (t.nbrinsb > 0)
	{	
		reverse_front_menu("rrb", a, b);
		t.nbrinsb--;
	}
}

void	from_upb(t_data t, t_stack **a, t_stack **b)
{
	while (t.nbrinsa > 0)
	{
		reverse_front_menu("rra", a, b);
		t.nbrinsa--;
	}
	while (t.nbrinsb > 0)
	{
		reverse_back_menu("rb", a, b);
		t.nbrinsb--;
	}
}

void	from_upab(t_data t, t_stack **a, t_stack **b)
{
	while (t.nbrinsa > 0 && t.nbrinsb > 0)
	{
		reverse_back_menu("rr", a, b);
		t.nbrinsa--;
		t.nbrinsb--;
	}
	while (t.nbrinsa > 0)
	{
		reverse_back_menu("ra", a, b);
		t.nbrinsa--;
	}
	while (t.nbrinsb > 0)
	{
		reverse_back_menu("rb", a, b);
		t.nbrinsb--;
	}
}

void	from_downab(t_data t, t_stack **a, t_stack **b)
{
	while (t.nbrinsa > 0 && t.nbrinsb > 0)
	{
		reverse_front_menu("rrr", a, b);
		t.nbrinsa--;
		t.nbrinsb--;
	}
	while (t.nbrinsa > 0)
	{
		reverse_front_menu("rra", a, b);
		t.nbrinsa--;
	}
	while (t.nbrinsb > 0)
	{
		reverse_front_menu("rrb", a, b);
		t.nbrinsb--;
	}
}
