#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main() {
    struct Node *head = malloc(sizeof(struct Node));
    head->value = 1;
    struct Node *second = malloc(sizeof(struct Node));
    second->value = 2;
    head->next = second;
    struct Node *third = malloc(sizeof(struct Node));
    third->value = 3;
    second->next = third;
    third->next = NULL;

    struct Node *current = head;
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }

    current = head;
    struct Node *temp;
    while (current != NULL) {
        temp = current;
        current = current->next;
        free(temp);
    }
}

