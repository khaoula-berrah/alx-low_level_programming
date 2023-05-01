#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t nm = 0;
    long int dif;

    while (head)
    {
        dif = head - head->next;
        nm++;
        printf("[%p] %d\n", (void *)head, head->n);
        if (dif > 0)
            head = head->next;
        else
        {
            printf("-> [%p] %d\n", (void *)head->next, head->next->n);
            break;
        }
    }

    return (nm);
}
