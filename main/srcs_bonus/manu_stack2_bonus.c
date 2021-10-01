/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manu_stack2_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhames <mokhames@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 17:05:26 by mokhames          #+#    #+#             */
/*   Updated: 2021/09/27 10:33:08 by mokhames         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "../includes/checker.h"

#include "../includes/checker.h"

void	move_lfront(t_stack **a)
{
	t_stack	*secLast;
	t_stack	*last;

	secLast = NULL;
	last = *a;
	if (*a == NULL || (*a)->next == NULL)
		return ;
	while (last->next != NULL)
	{
		secLast = last;
		last = last->next;
	}
	secLast->next = NULL;
	last->next = *a;
	*a = last;
}

void	move_lback(t_stack **a)
{
	t_stack	*first;
	t_stack	*last;

	first = *a;
	last = *a;
	if (*a == NULL || (*a)->next == NULL)
		return ;
	while (last->next != NULL)
	{
		last = last->next;
	}
	*a = first->next;
	first->next = NULL;
	last->next = first;
}

int	issorted(t_stack *a)
{
	t_stack	*t;

	t = a;
	if (t == NULL)
		return (0);
	while (t->next)
	{
		if (t->a >= t->next->a)
			return (0);
		t = t->next;
	}
	return (1);
}
