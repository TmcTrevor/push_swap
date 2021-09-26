/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bclear.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhames <mokhames@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 16:07:12 by mokhames          #+#    #+#             */
/*   Updated: 2021/09/26 13:14:20 by mokhames         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_index(t_stack *a, int b)
{
	int	i;

	i = 0;
	while (a && a->value != b)
	{
		i++;
		a = a->next;
	}
	return (i);
}
/*int     ifbiggerexist(t_stack *a, int b)
  {
  int i;

  i = 0;
  while (c)
  {
  if (c->value >= b)  
  {
  newt = c->value;
  tmp = 1;
  break;
  }
  c = c->next;
  }
  return (i);

  }*/

int	get_index_a(t_stack *a, int b)
{
	int		sa;
	int		tmp;
	int		newt;

	tmp = 0;
	newt = getfirst_belm(a, b, &tmp);
	if (tmp == 0)
		return (get_index(a, smallest(a, b)) + 1);
	newt = get_index(a, newt);
	return (newt);
}

int	cure(int a, int w, int *c)
{
	if (a > w / 2)
	{
		a = w - a;
		*c = -1;
	}
	else
		*c = 1;
	return (a);
}

t_data	smallest_a(t_stack *a, t_stack *b, t_stack *c)
{
	int		szb;
	int		i;
	t_data	t;
	int		t1[11];
	int		e;

	i = ft_lstsize1(a);
	szb = ft_lstsize1(c);
	init(a, b, c, t1);
	while (b)
	{
		t1[CURRENTNA] = cure(get_index_a(a, b->value), i, &t1[FROMCUPA]);
		t1[CURRENTNB] = cure(get_index(c, b->value), szb, &t1[FROMCUPB]);
		t1[CURRENTNAB] = t1[CURRENTNA] + t1[CURRENTNB] + 1;
		if (t1[NBRINSAB] > t1[CURRENTNAB])
			fill2(t1);
		b = b->next;
	}
	fill(&t, t1);
	return (t);
}

void	clear_b(t_stack **a, t_stack **b, int *sorted)
{
	int		sb;
	int		sm_b;
	t_data	t;

	sb = ft_lstsize1(*b);
	while (sb > 0)
	{
		sb = ft_lstsize1(*b);
		if (sb)
		{
			t = smallest_a(*a, *b, *b);
			start(a, b, t);
		}
	}
	shift(a, sorted[0]);
}
