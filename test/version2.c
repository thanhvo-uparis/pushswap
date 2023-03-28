#include <stdio.h>
#include <stdlib.h>

typedef struct s_pile {
    int data;
    struct s_pile *next;
} t_pile;

typedef struct s_head {
    t_pile *pile_a;
    t_pile *pile_b;
} t_head;

void push_swap(char **av) {
    t_head *head = malloc(sizeof(t_head));
    int size_av = 0;
    int i = 0;

    while (av[size_av])
        size_av++;
    head->pile_a = NULL;
    head->pile_b = NULL;
    t_pile *last_pile = NULL;
    while (i < size_av) {
        t_pile *new_pile = malloc(sizeof(t_pile));
        new_pile->data = atoi(av[i]);
        new_pile->next = NULL;
        if (head->pile_a == NULL) {
            head->pile_a = new_pile;
            last_pile = new_pile;
        } else {
            last_pile->next = new_pile;
            last_pile = new_pile;
        }
        i++;
    }
    t_pile *tmp = head->pile_a;
    while (tmp) {
        printf("%d-->", tmp->data);
        tmp = tmp->next;
    }
}

int main(int ac, char **av) {
    if (ac > 1)
        push_swap(av);
    return (0);
}
