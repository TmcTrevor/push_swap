/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhames <mokhames@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 10:13:46 by mokhames          #+#    #+#             */
/*   Updated: 2021/10/01 21:21:32 by mokhames         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    sort2(t_stack **a)
{
    if ((*a)->value > (*a)->next->value)
        swap_menu("sa",a,NULL);
}

void    sort3(t_stack **a)
{
    if ((*a)->value > (*a)->next->value && 
    (*a)->next->value < (*a)->next->next->value)
        d3_sort(a);
    else if ((*a)->value > (*a)->next->value && (*a)->next->value > (*a)->next->next->value)
    {
        swap_menu("sa",a,NULL);
        reverse_front_menu("rra",a,NULL);
    }
    else if ((*a)->value < (*a)->next->value && (*a)->next->value > (*a)->next->next->value)
        d4_sort(a);
    
}

void    d3_sort(t_stack **a)
{
    if ((*a)->value < (*a)->next->next->value)
        swap_menu("sa", a, NULL);
    else
        reverse_back_menu("ra", a, NULL);
    
}

void    d4_sort(t_stack **a)
{
    if ((*a)->value < (*a)->next->next->value)
    {
        swap_menu("sa", a, NULL);
        reverse_back_menu("ra", a, NULL);
    }
    else
        reverse_front_menu("rra", a, NULL);
}