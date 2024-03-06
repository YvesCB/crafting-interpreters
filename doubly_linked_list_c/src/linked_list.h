#ifndef LINKED

struct node {
  struct node *prev;
  struct node *next;

  int value;
};

typedef struct {
  struct node *first;
  struct node *last;

  int length;
} linked_list;

// take the linked list and input the value at the end of it
// return a pointer to the added node
// return null if insertion failed
void insert_node(linked_list *input, int value);

// find a value in the linked list
// return a pointer to the node if found else null
struct node *find_node(linked_list *input, int value);

// delete a node and return a pointer to it
// if not found, return null
struct node *delete_node(linked_list *input, int value);

void print_list(linked_list *input);

#define LINKED
#endif
