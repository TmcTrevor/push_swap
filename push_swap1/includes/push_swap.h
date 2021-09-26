/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokhames <mokhames@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 12:58:57 by mokhames          #+#    #+#             */
/*   Updated: 2021/09/26 13:14:42 by mokhames         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

# define FROMUPA 4
# define FROMUPB 3
# define NBRINSA 1
# define NBRINSB 0
# define NBRINSAB 2
# define FROMCUPA 9
# define FROMCUPB 8
# define CURRENTNA 6
# define CURRENTNB 5
# define CURRENTNAB 7
# define MINA 10
# define MAXA 11

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}					t_stack;

typedef struct s_data
{
	int	upa;
	int	upb;
	int	nbrinsa;
	int	nbrinsb;
	int	nbrinsab;
}					t_data;

void				ft_msg(char *c);
void				do_instructions(t_stack **a, t_stack **b);
void				run_checK(void);
t_stack				*new_stack(int a);
int					ft_lstsize1(t_stack *lst);
void				ft_lstadd_front1(t_stack **alst, t_stack *new);
int					is_numb(char *c);
int					ft_strlen(const char *s);
int					ft_isdigit(int c);
int					ft_strcmp(const char *s1, const char *s2);
long				ft_atoi(const char *c);
int					*check_duplication(int *a);
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
int					index_search(int *c, int to_find, int ac);
void				print(t_stack *a);
void				clear_b(t_stack **a, t_stack **b, int *sorted);
int					*sort_tab(int *a, int ac);
void				start(t_stack **a, t_stack **b, t_data t);
void				shift(t_stack **a, int c);
int					get_index(t_stack *a, int b);
void				ft_error(char *c);
void				start2(t_stack **a, t_stack **b, t_data t);
void				check(t_stack **a, t_stack **b);
int					sorted1(t_stack *a);
int					smallest(t_stack *a, int b);
int					smallest_ab(t_stack *t, int a, int mode);
void				actions(t_data t, t_stack **a, t_stack **b);
void				from_downab(t_data t, t_stack **a, t_stack **b);
void				from_upab(t_data t, t_stack **a, t_stack **b);
void				from_upb(t_data t, t_stack **a, t_stack **b);
void				from_upa(t_data t, t_stack **a, t_stack **b);
int					getfirst_belm(t_stack *a, int b, int *t);
void				init(t_stack *a, t_stack *b, t_stack *c, int *t);
void				fill(t_data *t, int *t1);
void				fill2(int *t1);
int					cure(int a, int w, int *c);
int					get_index_a(t_stack *a, int b);

#endif