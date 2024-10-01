/*
CH-230-A
a2 p7.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

int main() {
    // We create the int variable 'i'.
    int i = 8;
    /* 
    We create a while loop which runs for as long as
    the condition for it stopping is not met. In this case,
    it will not stop until 'i' is bigger than or equal to 4.
    */

    while (i >= 4) {
        printf("i is %d\n", i);
        i--; 
    /* 
    I believe that this was the issue. The 'i--' decrement statement
    was not in the while loop which led to the loop being repeated 
    infinitely since nothing changed to stop the loop.
    */
    }
    printf("That’s it.\n");
    
    /*
    Printing "That's it." was in the base code
    so I did not remove it since it prints a message 
    that indicates that the loop has ended.
    */
   
    return 0;
}