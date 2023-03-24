#ifndef __PUSH_SWAP_H__
# define __PUSH_SWAP_H__

# include <stdio.h>
# include <stdlib.h>


typedef struct s_pile
{
	int			*a;
	int			*b;
	int			size_a;
	int			size_b;
	struct s_pile	*next;
}	t_pile;


// t_pile	*add_elem(int data);
void	display_pile(t_pile  *head);
void	add_last(t_pile **head, int data);
// swap
void	swap_a(t_pile *pile, int bonus);
// push
// utils
int	ft_strlen_av(char **av);
#endif
