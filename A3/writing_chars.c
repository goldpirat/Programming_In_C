/*
CH-230-A
a3 p2.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

int main(){
    //We create a float x.
    char ch;
    //We create an integer variable y.
    int n;

    //We scan for both ch and n to check if an input has been typed.
    scanf("%c",&ch);
    scanf("%d",&n);

    /*
    The for loop prints out the characters decreasing from the ch 
    that has been input until i is equal to or bigger than n.
    */
    for (int i = 0; i <= n; i++) {
        printf("%c ", ch - i);
    }

    printf("\n");
    
    return 0;
    // The code is done.
}
