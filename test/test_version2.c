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

t_pile *add_last(t_head *head, int data) {
    t_pile *new_pile = malloc(sizeof(t_pile));
    if (new_pile == NULL) {
        printf("Erreur : échec de l'allocation mémoire.\n");
        exit(EXIT_FAILURE);
    }
    new_pile->data = data;
    new_pile->next = NULL;
    if (head->pile_a == NULL) {
        head->pile_a = new_pile;
    } else {
        t_pile *tmp = head->pile_a;
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = new_pile;
    }
    return new_pile;
}

int main() {
    t_head *head = NULL;

    add_last(head, 32);
    add_last(head, 55);
	add_last(head, 12);
	add_last(head, 47);

    t_pile *tmp = head->pile_a;
    while (tmp != NULL) {
        printf("%d --> ", tmp->data);
        tmp = tmp->next;
    }

    return 0;
}
