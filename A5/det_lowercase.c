/*
CH-230-A
a5 p3.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int count_lowercase(char *str)
{
	int sum=0;
    // Go through the loop using a pointer
	while( *str != '\0'){
        //Check for lowercase.
		if(islower(*str)){
			sum++;
		}
		str++; 
	}		
	return sum;
}

int main () {
    // Declare the char with the limit of 50 characters.
    // Get the string from user input.
	char str[50];
	fgets(str, 50, stdin);
	
	while(1) {
        // If "Enter" : End the loop.
		if(str[0] == '\n'){ 
			break;
		}
        
        //Declare a variable to store the return of the function.
		int lowercase_count = count_lowercase(str);
        printf("Number of lowercase characters: %d\n", lowercase_count);

        // Read the next string.
		fgets(str, 50, stdin);
	}
	
  return 0;
}
