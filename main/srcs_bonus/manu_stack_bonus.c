/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manu_stack_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhames <mokhames@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 11:48:26 by mokhames          #+#    #+#             */
/*   Updated: 2021/09/27 10:29:29 by mokhames         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"
t_stack	*new_stack(int a)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		return (0);
	else
	{
		stack->a = a;
		stack->next = NULL;
	}
	return (stack);
}

int	ft_lstsize1(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

void	ft_lstadd_front1(t_stack **alst, t_stack *new)
{
	if (*alst != NULL)
		new->next = *alst;
	*alst = new;
}

void	ft_lstadd_back1(t_stack **alst, t_stack *new)
{
	t_stack	*t;

	t = *alst;
	if (*alst == 0)
	{
		*alst = new;
		new->next = NULL;
	}
	else
	{
		while (t->next)
			t = t->next;
		t->next = new;
		new->next = NULL;
	}
}

t_stack	*delete_first(t_stack *a)
{
	t_stack	*tmp;

	if (a == NULL)
		return (0);
	tmp = a;
	a = a->next;
	free(tmp);
	return (a);
}
