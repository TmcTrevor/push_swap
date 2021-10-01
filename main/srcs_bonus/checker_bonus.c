/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhames <mokhames@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 16:37:23 by mokhames          #+#    #+#             */
/*   Updated: 2021/09/27 09:53:14 by mokhames         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

void	check_duplication(int *a)
{
	int	i;
	int	j;

	i = 0;
	while (a[i])
	{
		j = i + 1;
		while (a[j])
		{
			if (a[i] == a[j])
				ft_error("duplicated number\n");
			j++;
		}
		i++;
	}
}

int	*tab_int(char **c, int a)
{
	int	*res;
	int	i;

	i = 1;
	res = malloc(a * sizeof(int));
	while (i < a)
	{
		res[i] = ft_atoi(c[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

int	is_numb(char *c)
{
	int		i;
	long	a;

	i = 0;
	if (c[0] == '-')
		i++;
	while (c[i])
	{
		if (!ft_isdigit((c[i])))
			return (0);
		i++;
	}
	a = ft_atoi(c);
	if (a > INT32_MAX || a < INT32_MIN)
		return (0);
	return (1);
}
