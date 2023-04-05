#include <stdio.h>
#include "lists.h"


/**
 * @brief 
 * print_listint
 * 
*/

size_t print_listint(const listint_t *h){
    size_t res = 0;
    while(h != NULL){
        res++;
        h = h->next;
    }

    return (res);
}