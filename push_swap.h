#ifndef __PUSH_SWAP_H__
# define __PUSH_SWAP_H__

# include <stdio.h>
# include <stdlib.h>

typedef struct	s_list
{
	int data;
	struct s_list	*next;
} t_list;


t_list	*add_elem(int data);
void	display_pile(t_list  *head);
void	add_last(t_list **head, int data);
void	display_pile(t_list  *head);
#endif
