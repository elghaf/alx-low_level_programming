#include "lists.h"


size_t listint_len(const listint_t *h){

    size_t res = 0;

    while (h != NULL){
        printf("%d\n", h->n);

        res++;
        h = h->next;
    }
    return (res);
}