#ifndef SORT
#define SORT

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 * @n: integer stored in the node
 * @prev: pointer to the previous element of the list
 * @next: pointer to the next element of the list
 */
typedef struct listint_s
{
  const int n;
  struct listint_s *prev;
  struct listint_s *next;
} listint_t;

/* Given functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Prototypes */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);



void swap_head(listint_t **list, listint_t *aux);
void swap_middle(listint_t *aux);
void swap_tail(listint_t *aux);


#endif
  
