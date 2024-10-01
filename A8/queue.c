/*
CH-230-A
a8 p1.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
 
#include "queue.h"
 
void initialize_queue(Queue *pq)
{
    pq->front = pq->rear = NULL;
    pq->items = 0;
}
 
int queue_is_full(const Queue *pq)
{
    return pq->items == MAXQUEUE;
}
 
int queue_is_empty(const Queue *pq)
{
    return pq->items == 0;
}
 
int queue_item_count(const Queue *pq)
{
    return pq->items;
}
 
/* Function to copy sth to a node */
static void copy (Item item, Node *pnode) {
    pnode -> item = item;
}
 
/* Function to add a new item to the queue */
int enqueue(Item item, Queue *pq)
{
    /* If queue is full */
    if (queue_is_full(pq) == 1)
        return -1;
 
    /* Create a new node */
    Node *new_node;
    new_node = (Node*) malloc (sizeof(new_node));
    if ( !new_node )
        exit(1);
 
    /* Copy item to the new node */
    copy (item, new_node);
 
    new_node -> next = NULL;
 
    if (queue_is_empty(pq) == 1)
        pq -> front = new_node;
    else
        (pq -> rear) -> next = new_node;
    pq -> rear = new_node;
    pq -> items++;
 
    return 0;
}
 
int dequeue(Item *pitem, Queue *pq)
{
    return 0;
}
 
void empty_queue(Queue *pq)
{
    Item dummy;
    while (!queue_is_empty(pq)) {
        dequeue(&dummy, pq);
    }
}