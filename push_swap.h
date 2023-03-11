#ifndef __PUSH_SWAP_H__
# define __PUSH_SWAP_H__

# include <stdio.h>
# include <stdlib.h>


typedef struct s_pile
{
	int			data;
	struct s_pile	*next;
}	t_pile;


// t_pile	*add_elem(int data);
void	display_pile(t_pile  *head);
void	add_last(t_pile **head, int data);

#endif
