#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

void insert_node(linked_list *input, int value) {
  struct node *new_node = (struct node *)malloc(sizeof(struct node));
  if (new_node == NULL) {
    return;
  }

  new_node->next = NULL;
  new_node->prev = NULL;
  new_node->value = value;

  if (input->first == NULL) {
    input->first = new_node;
    input->last = new_node;
  } else {
    input->last->next = new_node;
    new_node->prev = input->last;
    input->last = new_node;
  }

  input->length++;
}

struct node *find_node(linked_list *input, int value) {
  if (input->first) {
    struct node *cur = input->first;

    while (cur->value != value) {
      if (cur->next == 0)
        return 0;
      else
        cur = cur->next;
    }

    return cur;
  } else {
    return 0;
  }
}

struct node *delete_node(linked_list *input, int value) {
  if (input->first) {
    struct node *cur = input->first;

    while (cur->value != value) {
      if (cur->next == 0)
        return 0;
      else
        cur = cur->next;
    }

    if (cur->prev) {
      cur->prev->next = cur->next;
    } else {
      input->first = cur->next;
    }
    if (cur->next) {
      cur->next->prev = cur->prev;
    } else {
      input->last = cur->prev;
    }
    input->length--;

    return cur;
  } else {
    return 0;
  }
}

void print_list(linked_list *input) {
  printf("List has length: %d\n", input->length);
  if (input->first) {
    struct node *cur = input->first;

    while (cur->next) {
      printf("%d", cur->value);
      cur = cur->next;
      if (cur->next) {
        printf(", ");
      }
    }

    printf("\n");
  }
}
