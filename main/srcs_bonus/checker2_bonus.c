/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker2_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhames <mokhames@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 11:40:26 by mokhames          #+#    #+#             */
/*   Updated: 2021/10/01 15:57:34 by mokhames         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	ft_error(char *c)
{
	write(1, c, ft_strlen((c)));
	exit(0);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		i;
	int		*a_stack;

	i = argc - 1;
	if (argc < 2)
		ft_error("few arguments\n");
	while (i >= 1)
	{
		if (!is_numb(argv[i]))
			ft_error("Invalid argument\n");
		ft_lstadd_front1(&stack_a, new_stack(ft_atoi(argv[i])));
		i--;
	}
	a_stack = tab_int(argv, argc);
	check_duplication(a_stack);
	do_instructions(&stack_a, &stack_b);
	if (issorted(stack_a) && stack_b == NULL)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (0);
}
