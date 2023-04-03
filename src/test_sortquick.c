#include <stdio.h>
#include <stdlib.h>

typedef struct s_pile
{
    int data;
    struct s_pile *next;
} t_pile;

typedef struct s_head
{
    t_pile *pile_a;
    t_pile *pile_b;
} t_head;

// Fonction pour ajouter un élément en haut de la pile a
void add_elem_a(t_head *head, int data)
{
    t_pile *new_elem;

    new_elem = malloc(sizeof(t_pile));
    new_elem->data = data;
    new_elem->next = head->pile_a;
    head->pile_a = new_elem;
}

// Fonction pour libérer la mémoire allouée à la pile a
void free_pile_a(t_head *head)
{
    t_pile *tmp;

    while (head->pile_a)
    {
        tmp = head->pile_a;
        head->pile_a = head->pile_a->next;
        free(tmp);
    }
}

// Fonction pour afficher la pile a
void print_pile_a(t_head *head)
{
    t_pile *current;

    current = head->pile_a;
    while (current)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Fonction pour échanger les deux premiers éléments de la pile a
t_pile *swap_a(t_head *head)
{
    t_pile *first_elem;
    t_pile *second_elem;
    t_pile *third_elem;

    first_elem = head->pile_a;
    second_elem = head->pile_a->next;
    third_elem = head->pile_a->next->next;
    head->pile_a = second_elem;
    second_elem->next = first_elem;
    first_elem->next = third_elem;

    return (head->pile_a);
}

// Fonction pour échanger les deux premiers éléments de la pile b
t_pile *swap_b(t_head *head)
{
    t_pile *first_elem;
    t_pile *second_elem;
    t_pile *third_elem;

    first_elem = head->pile_b;
    second_elem = head->pile_b->next;
    third_elem = head->pile_b->next->next;
    head->pile_b = second_elem;
    second_elem->next = first_elem;
    first_elem->next = third_elem;

    return (head->pile_b);
}

// Fonction pour échanger les deux premiers éléments de la pile a et de la pile b
void swap_ss(t_head *head)
{
    swap_a(head);
    swap_b(head);
}

// Fonction pour déplacer le premier élément de la pile b en haut de la pile a
void push_a(t_head *head)
{
    t_pile *first_elem_b;

    if (head->pile_b)
    {
        first_elem_b = head->pile_b;
        head->pile_b = head->pile_b->next;
        first_elem_b->next = head->pile_a;
        head->pile_a = first_elem_b;
    }
}

// Fonction pour déplacer le premier élément de la pile a en haut de la pile b
void    push_b(t_head *head)
{
    t_pile  *temp1;

    if (!head->pile_a)
        return ;
    temp1 = head->pile_a;
    head->pile_a = head->pile_a->next;
    temp1->next = head->pile_b;
    head->pile_b = temp1;
}

void    shift_up_a(t_head *head)
{
    t_pile  *temp1;
    t_pile  *temp2;

    if (!head->pile_a || !(head->pile_a)->next)
        return ;
    temp1 = head->pile_a;
    head->pile_a = head->pile_a->next;
    temp2 = head->pile_a;
    while (temp2->next)
        temp2 = temp2->next;
    temp2->next = temp1;
    temp1->next = NULL;
}

void    shift_up_b(t_head *head)
{
    t_pile  *temp1;
    t_pile  *temp2;

    if (!head->pile_b || !(head->pile_b)->next)
        return ;
    temp1 = head->pile_b;
    head->pile_b = head->pile_b->next;
    temp2 = head->pile_b;
    while (temp2->next)
        temp2 = temp2->next;
    temp2->next = temp1;
    temp1->next = NULL;
}

void    shift_up_ab(t_head *head)
{
    shift_up_a(head);
    shift_up_b(head);
}

void	shift_down_a(t_head *head)
{
	t_pile	*last;
	t_pile	*second_last;

	if (head->pile_a && head->pile_a->next)
	{
		last = head->pile_a;
		while (last->next)
		{
			second_last = last;
			last = last->next;
		}
		second_last->next = NULL;
		last->next = head->pile_a;
		head->pile_a = last;
	}
}

void	shift_down_b(t_head *head)
{
	t_pile	*last;
	t_pile	*second_last;

	if (head->pile_b && head->pile_b->next)
	{
		last = head->pile_b;
		while (last->next)
		{
			second_last = last;
			last = last->next;
		}
		second_last->next = NULL;
		last->next = head->pile_b;
		head->pile_b = last;
	}
}

void	shift_down_ab(t_head *head)
{
	shift_down_a(head);
	shift_down_b(head);
}

void	swap_data(t_pile *a, t_pile *b)
{
	int tmp;

	tmp = a->data;
	a->data = b->data;
	b->data = tmp;
}

t_pile	*partition(t_head *head, t_pile *start, t_pile *end)
{
	int pivot = start->data;
	t_pile *i = start;
	t_pile *j = start->next;

	while (j != end)
	{
		if (j->data < pivot)
		{
			i = i->next;
			swap_data(i, j);
		}
		j = j->next;
	}
	swap_data(start, i);
	return (i);
}

void	sort_quick_rec(t_head *head, t_pile *start, t_pile *end)
{
	if (start != end)
	{
		t_pile *pivot = partition(head, start, end);
		sort_quick_rec(head, start, pivot);
		sort_quick_rec(head, pivot->next, end);
	}
}

void	sort_quick(t_head *head)
{
	if (!head->pile_a || !head->pile_a->next)
		return ;
	sort_quick_rec(head, head->pile_a, NULL);
}

int	ft_strlen_argv(char **av)
{
	int	len;

	len = 0;
	while (*av != NULL)
	{
		av++;
		len++;
	}
	return (len);
}

t_pile	*add_last_pile(t_head *head, int data)
{
	t_pile	*new_pile = malloc(sizeof(t_pile));
	if (!new_pile)
	{
		printf("Error echec de l'allocation memoire!\n");
		exit(EXIT_FAILURE);
	}
	new_pile->data = data;
	new_pile->next = NULL;
	if (head->pile_a == NULL)
		head->pile_a = new_pile;
	else
	{
		t_pile	*tmp = head->pile_a;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_pile;
	}
	return (new_pile);
}

void	ft_print_pile(t_pile *pile)
{
	while (pile != NULL)
	{
		printf("%d-->", pile->data);
		pile = pile->next;
	}
}

// int get_pivot(t_pile *start, t_pile *end)
// {
//     return end->data;
// }

// void	quick_sort(t_head *head, int len)
// {
// 	if (len < 2)
// 		return ;
// 	int pivot = get_pivot(head->pile_a, len);
// 	while (len--)
// 	{
// 		if (head->pile_a->data < pivot)
// 			push_b(head);
// 		else
// 			shift_up_a(head);
// 	}
// 	while (head->pile_b)
// 		push_a(head);
// 	quick_sort(head, len + 1 - head->pile_a->size);
// 	quick_sort(head, head->pile_a->size - 1);
// }



// int		main(int argc, char **argv)
// {
// 	t_head	head;

// 	if (argc < 2)
// 		return (0);
// 	head.pile_a = NULL;
// 	head.pile_b = NULL;
// 	if (!parse_args(argc - 1, argv + 1, &head))
// 		error_exit(&head);
// 	if (is_sorted(head.pile_a))
// 	{
// 		free_all(&head);
// 		return (0);
// 	}
// 	quick_sort(&head, head.pile_a->size);
// 	free_all(&head);
// 	return (0);
// }

// void	quick_sort(t_head *head, int size)
// {
// 	if (size < 2)
// 		return;
// 	int pivot = head->pile_a->data;
// 	t_pile *current = head->pile_a->next;
// 	while (size > 0)
// 	{
// 		if (current->data < pivot)
// 		{
// 			push_b(head);
// 			swap_a(head);
// 		}
// 		else
// 			shift_up_a(head);
// 		current = head->pile_a->next;
// 		size--;
// 	}
// 	while (head->pile_b)
// 		push_a(head);
// 	quick_sort(head, size);
// }

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		t_head	*head;
		int		size_av;
		int		i;

		head = malloc(sizeof(t_head));
		head->pile_a = NULL;
		head->pile_b = NULL;
		size_av = ft_strlen_argv(av);
		i = 1;
		while (i < size_av)
		{
			add_last_pile(head, atoi(av[i]));
			i++;
		}
		ft_print_pile(head->pile_a);
		printf("\n");
		sort_quick(head);
		ft_print_pile(head->pile_a);
		free(head);
	}
	return (0);
}
