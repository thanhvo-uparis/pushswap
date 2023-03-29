#ifndef __PUSH_SWAP_H__
# define __PUSH_SWAP_H__

# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef	struct s_pile
{
	int	data;
	struct s_pile *next;

}	t_pile;

typedef struct	s_head
{
	struct s_pile	*pile_a;
	struct s_pile	*pile_b;
} t_head;


void	display_pile(t_pile  *head);
// swap
t_pile	*swap_a(t_head *head);
t_pile	*swap_b(t_head *head);
void	swap_ss(t_head *head);
// push
t_pile	*ft_push_pile(t_pile **bf, t_pile **bi);
void	push_b(t_head *head);
void	push_a(t_head *head);
// rotate
void	shift_up_a(t_head *head);
void	shift_up_b(t_head *head);
void	shift_up_ab(t_head *head);
// reverse rotate
void	shift_down_a(t_head *head);
void	shift_down_b(t_head *head);
void	shift_down_ab(t_head *head);
// utils
int	ft_strlen_argv(char **av);
t_pile	*add_last_pile(t_head *begin, int data);
void	ft_print_pile(t_pile *pile);

#endif
