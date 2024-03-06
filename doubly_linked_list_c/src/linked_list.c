#include "linked_list.h"
#include <stdio.h>

void insert_node(linked_list *input, int value) {
  // if a first node exists
  if (input->first) {
    struct node *cur = input->first;

    // get next node until next node is null
    while (cur->next) {
      cur = cur->next;
    }

    struct node new_node = {cur, 0, value};

    cur->next = &new_node;
    input->last = &new_node;
    input->length++;
  } else {
    struct node new_node = {0, 0, value};
    input->first = &new_node;
    input->last = &new_node;
    input->length++;
  }
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
  printf("List has length: %d", input->length);
  if (input->first) {
    struct node *cur = input->first;

    while (cur->next) {
      printf("%d, ", cur->value);
      cur = cur->next;
    }

    printf("\n");
  }
}
