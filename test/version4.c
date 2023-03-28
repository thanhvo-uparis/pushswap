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

int ft_strlen_av(char **av)
{
    int len = 0;
    while (*av != NULL)
    {
        av++;
        len++;
    }
    return len;
}

void add_last_pile(t_head *head, int data)
{
    t_pile *new_pile = malloc(sizeof(t_pile));
    if (new_pile == NULL)
    {
        printf("Error: memory allocation failed\n");
        exit(1);
    }
    new_pile->data = data;
    new_pile->next = NULL;
    if (head->pile_a == NULL)
    {
        head->pile_a = new_pile;
    }
    else
    {
        t_pile *tmp = head->pile_a;
        while (tmp != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = new_pile;
    }
    t_pile *tmp = head->pile_a;
    while (tmp != NULL)
    {
        printf("%d-->", tmp->data);
        tmp = tmp->next;
    }
	free(head->pile_a);
}

void push_swap(char **av)
{
    t_head *head = malloc(sizeof(t_head));
    if (head == NULL)
    {
        printf("Error: memory allocation failed\n");
        exit(1);
    }
    head->pile_a = NULL;
    head->pile_b = NULL;
    int size_av = ft_strlen_av(av);
    for (int i = 1; i < size_av; i++)
    {
        add_last_pile(head, atoi(av[i]));
    }
}

int main(int argc, char **argv)
{
    if (argc > 1)
    {
        push_swap(argv);
    }
    return 0;
}
