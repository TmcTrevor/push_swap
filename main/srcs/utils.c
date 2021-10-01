/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhames <mokhames@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:42:48 by mokhames          #+#    #+#             */
/*   Updated: 2021/09/26 16:27:34 by mokhames         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	index_search(int *c, int to_find, int ac)
{
	int	i;

	i = 0;
	while (i < ac - 1)
	{
		if (c[i] == to_find)
			return (i);
		i++;
	}
	if (i == 0)
		ft_error("num not found");
	return (-1);
}

/*void    ft_free(t_data *t,int s)
  {
  int i;

  i = 0;
  while (i < s)
  {
  free(t[i]);
  }
  }*/
void	shift(t_stack **a, int c)
{
	int	i;
	int	e;

	i = get_index(*a, c);
	e = ft_lstsize1(*a);
	if (i > e / 2)
	{
		i = e - i;
		while (i--)
			reverse_front_menu("rra", a, NULL);
	}
	else
		while (i--)
			reverse_back_menu("ra", a, NULL);
}

int	sorted1(t_stack *a)
{
	while (a->next)
	{
		if (a->value >= a->next->value)
			return (0);
		a = a->next;
	}
	return (1);
}

void	check(t_stack **a, t_stack **b)
{
	while (!sorted1(*a))
		reverse_back_menu("ra", a, b);
}
/*void	start(t_stack **a, t_stack **b, t_data t)
//if ()
{
//1 a = 1 u b = -1
if (t.upa == 1 && t.upb == 1 && t.nbrinsa && t.nbrinsb)
while (t.nbrinsa-- && t.nbrinsb--)
reverse_back_menu("rr",a,b);
else
while (t.nbrinsa-- && t.nbrinsb--)
reverse_front_menu("rrr",a,b);	 
if (t.upa == 1 && t.nbrinsa)
while (t.nbrinsa--)
reverse_back_menu("ra",a,b);
else 
while (t.nbrinsa--)
reverse_front_menu("rra",a,b);
if (t.upb == 1 && t.nbrinsb)
while (t.nbrinsb--)
reverse_back_menu("rb",a,b);
else 
while (t.nbrinsb--)
reverse_front_menu("rrb",a,b);


push_menu("pa",a,b);
}*/

void	start(t_stack **a, t_stack **b, t_data t)
{
	if (t.upa == 1 && t.upb == -1)
		from_upa(t, a, b);
	else if (t.upb == 1 && t.upa == -1)
		from_upb(t, a, b);
	else if (t.upa == 1 && t.upb == 1)
		from_upab(t, a, b);
	else if (t.upa == -1 && t.upb == -1)
		from_downab(t, a, b);
	push_menu("pa", a, b);
}
