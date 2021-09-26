/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhames <mokhames@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:57:35 by mokhames          #+#    #+#             */
/*   Updated: 2021/09/26 16:25:29 by mokhames         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	clear_a(t_stack **a, t_stack **b, int *sorted, int ac)
{
	int		i;
	int		index;
	int		e;
	t_stack	*c;

	e = ft_lstsize1(*a);
	i = 0;
	while (!sorted1(*a))
	{
		index = index_search(sorted, (*a)->value, ac);
		if (index >= i && index <= i + 12)
		{
			c = (*a)->next;
			reverse_back_menu("ra", a, b);
			i = index;
			*a = c;
		}
		else
			push_menu("pb", a, b);
		e--;
	}
}

void	ft_msg(char *c)
{
	write(1, c, ft_strlen((c)));
	write(1, "\n", 1);
}

void	ft_error(char *c)
{
	write(1, c, ft_strlen((c)));
	write(1, "\n", 1);
	exit(0);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		*sorted;
	int		i;

	i = argc - 1;
	if (argc < 2)
		ft_error("few arguments\n");
	sorted = tab_int(argv, argc);
	sorted = check_duplication(sorted);
	sorted = sort_tab(sorted, argc);
	while (i >= 1)
	{
		if (!is_numb(argv[i]))
			ft_error("Invalid argument\n");
		ft_lstadd_front1(&stack_a, new_stack(ft_atoi(argv[i])));
		i--;
	}
	clear_a(&stack_a, &stack_b, sorted, argc);
	clear_b(&stack_a, &stack_b, sorted);
}
