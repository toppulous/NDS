#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <stdlib.h>

// Actual node of data linked list, points to data and next node
struct llnode_t { 
  void            *data;
  struct llnode_t *next; 
};

// Linked list struct that users interact with.
struct linkedlist_t { 
  struct llnode_t *list; 
  int (*compar) (const void*, const void*);
  size_t size;
  // TODO other
};

// Creation and Destruction functions
int linkedlist_init(struct linkedlist_t **ll); // TODO add other necessary args
int linkedlist_destroy(struct linkedlist_t **ll);

// Insertion and Deletion Functions 
int linkedlist_insert(struct linkedlist_t *ll, void *data);
int linkedlist_insert_first(struct linkedlist_t *ll, void *data);
int linkedlist_insert_last(struct linkedlist_t *ll, void *data);
int linkedlist_insert_sorted(struct linkedlist_t *ll, void *data);
int linkedlist_delete(struct linkedlist_t *ll, void *data);
int linkedlist_delete_first(struct linkedlist_t *ll);
int linkedlist_delete_last(struct linkedlist_t *ll);
int linkedlist_delete_nth(struct linkedlist_t *ll, int n);

// Sorting Functions
void linkedlist_sort(struct linkedlist_t *ll);
void linkedlist_fastsort(struct linkedlist_t *ll);

// Misc Functions
int linkedlist_size(struct linkedlist_t *ll);

#endif /* LINKEDLIST_H_ */
