#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly linked list.
 * @head: A pointer to the head of the listint_t list.
 * @number: The number to insert.
 * 
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *node = malloc(sizeof(listint_t));
    listint_t *current = *head;
    listint_t *prev = NULL;

    if (!node)
        return NULL;

    node->n = number;
    node->next = NULL;

    if (!*head || (*head)->n >= number)
    {
        node->next = *head;
        *head = node;
        return node;
    }

    while (current && current->n < number)
    {
        prev = current;
        current = current->next;
    }

    prev->next = node;
    node->next = current;

    return node;
}
