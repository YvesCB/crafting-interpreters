#include "linked_list.h"
#include <stdio.h>

int main() {
  linked_list list = {0, 0, 0};

  print_list(&list);

  for (int i = 0; i < 10; i++) {
    insert_node(&list, i + 1);
  }

  print_list(&list);

  struct node *one = find_node(&list, 5);

  if (one) {
    printf("Found node with val %d\n", one->value);
  }

  struct node *five = delete_node(&list, 5);

  print_list(&list);

  return 0;
}
