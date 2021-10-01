/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhames <mokhames@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 16:34:42 by mokhames          #+#    #+#             */
/*   Updated: 2021/09/27 13:03:12 by mokhames         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include <stdio.h>
# include <unistd.h>
# include "../srcs_bonus/GNL/get_next_line.h"

typedef struct s_stack
{
	int				a;
	struct s_stack	*next;
}					t_stack;

void				do_instructions(t_stack **a, t_stack **b);
char				*ft_strchr(const char *s, int c);
void				*ft_calloc(size_t count, size_t size);
char				*ft_strcpy(char *dest, char *src);
char				*ft_strdup(char *src);
void				run_checK(void);
t_stack				*new_stack(int a);
int					is_numb(char *c);
int					ft_strlen(const char *s);
int					ft_isdigit(int c);
int					ft_strcmp(const char *s1, const char *s2);
long				ft_atoi(const char *c);
int					ft_lstsize1(t_stack *lst);
void				ft_lstadd_front1(t_stack **alst, t_stack *new);
int					is_numb(char *c);
void				check_duplication(int *a);
void				ft_error(char *c);
int					*tab_int(char **c, int a);
void				ft_lstadd_back1(t_stack **alst, t_stack *new);
t_stack				*delete_first(t_stack *a);
void				move_lfront(t_stack **a);
void				move_lback(t_stack **a);
int					issorted(t_stack *a);
void				execute_swap(t_stack **a);
void				execute_push(t_stack **a, t_stack **b);
int					swap_menu(char *ins, t_stack **a, t_stack **b);
int					push_menu(char *ins, t_stack **a, t_stack **b);
int					reverse_front_menu(char *ins, t_stack **a, t_stack **b);
int					reverse_back_menu(char *ins, t_stack **a, t_stack **b);
char				*ft_strjoin(char *s1, char *s2);

#endif