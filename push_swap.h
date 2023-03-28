#ifndef __PUSH_SWAP_H__
# define __PUSH_SWAP_H__

# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_pile
{
	int	data;
	struct s_pile *next;

}	t_pile;

typedef struct	s_head
{
	struct s_pile	*pile_a;
	struct s_pile	*pile_b;
} t_head;


// t_pile	*add_elem(int data);
void	display_pile(t_pile  *head);
// void	add_last(t_pile **head, int data);
// swap
t_pile	*swap_a(t_head *head);
// push
t_pile	*ft_push_pile(t_pile **bf, t_pile **bi);
void	push_b(t_head *head);
void	push_a(t_head *head);
// utils
int	ft_strlen_argv(char **av);
t_pile	*add_last_pile(t_head *begin, int data);
void	ft_print_pile(t_pile *pile);
#endif


