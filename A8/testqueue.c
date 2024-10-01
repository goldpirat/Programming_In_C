/*
CH-230-A
a8 p1.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

#include "queue.h"

int main()
{
    Queue line; // Declare a queue named "line"
    Item temp;  // Temporary variable to hold items to add/remove
    char ch;     // Character to store user input

    initialize_queue(&line); // Initialize the queue

    while (((ch = getchar()) != EOF) && (ch != 'q'))
    {
        switch (ch)
        {
            case 'a':
                printf("add int: ");
                scanf("%d", &temp);
                if (!queue_is_full(&line)) // Check if the queue is not full
                {
                    printf("Putting %d into queue\n", temp);
                    enqueue(temp, &line); // Add the item to the queue
                }
                else
                    puts("Queue is full");
                break;

            case 'd':
                if (queue_is_empty(&line)) // Check if the queue is empty
                    puts("Nothing to delete!");
                else
                {
                    dequeue(&temp, &line); // Remove an item from the queue
                    printf("Removing %d from queue\n", temp);
                }
                break;

            default:
                printf("%d items in queue\n", queue_item_count(&line));
                puts("Type a to add, d to delete, q to quit:");
        }
    }

    puts("Bye.");
    return 0;
}
