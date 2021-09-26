/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhames <mokhames@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:40:18 by mokhames          #+#    #+#             */
/*   Updated: 2021/09/26 13:14:03 by mokhames         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*void    print(t_stack *a)
{
    while (a)
	{
		printf("%d\n", a->value);
		a = a->next;
	}
}*/

int	getfirst_belm(t_stack *a, int b, int *t)
{
	int	newt;

	newt = a->value;
	while (a)
	{
		if (a->value >= b)
		{
			newt = a->value;
			*t = 1;
			break ;
		}
		a = a->next;
	}
	while (a)
	{
		if (a->value >= b && newt > a->value)
			newt = a->value;
		a = a->next;
	}
	return (newt);
}

int	smallest(t_stack *a, int b)
{
	int	i;
	int	tmp;

	tmp = a->value;
	while (a)
	{
		if (a->value > tmp)
			tmp = a->value;
		a = a->next;
	}
	return (tmp);
}

void	fill2(int *t1)
{
	t1[NBRINSA] = t1[CURRENTNA];
	t1[NBRINSB] = t1[CURRENTNB];
	t1[NBRINSAB] = t1[CURRENTNAB];
	t1[FROMUPA] = t1[FROMCUPA];
	t1[FROMUPB] = t1[FROMCUPB];
}

void	fill(t_data *t, int *t1)
{
	t->nbrinsa = t1[NBRINSA];
	t->nbrinsb = t1[NBRINSB];
	t->nbrinsab = t1[NBRINSAB];
	t->upa = t1[FROMUPA];
	t->upb = t1[FROMUPB];
}

void	init(t_stack *a, t_stack *b, t_stack *c, int *t1)
{
	int	i;
	int	szb;

	i = ft_lstsize1(a);
	szb = ft_lstsize1(c);
	t1[NBRINSA] = cure(get_index_a(a, b->value), i, &t1[FROMUPA]);
	t1[NBRINSB] = cure(get_index(c, b->value), szb, &t1[FROMUPB]);
	t1[NBRINSAB] = t1[NBRINSA] + t1[NBRINSB] + 1;
}
