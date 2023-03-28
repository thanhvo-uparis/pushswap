#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void add_last_pile(t_head *begin, int data)
{
    t_pile *new_pile = malloc(sizeof(t_pile));
    new_pile->data = data;
    new_pile->next = NULL;

    if (begin->pile_a == NULL)
    {
        begin->pile_a = new_pile;
    }
    else
    {
        t_pile *tmp = begin->pile_a;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = new_pile;
    }

    t_pile *tmp = begin->pile_a;
    while (tmp != NULL)
    {
        printf("%d-->", tmp->data);
        tmp = tmp->next;
    }
}

void push_swap(char **av)
{
    t_head *head = malloc(sizeof(t_head));
    int size_av;
    int i;

    size_av = 4;
    head->pile_a = NULL;
    head->pile_b = NULL;
    i = 1;
    while (i < size_av)
    {
        add_last_pile(head, atoi(av[i]));
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac > 1)
    {
        push_swap(av);
    }
}
