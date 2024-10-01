/*
CH-230-A
a3 p3.c
Flori Kusari
fkusari@jacobs-university.de
*/

#include <stdio.h>

float convert(int cm){
    //When called the function returns the km equivalent of the cm variable.
    return (float)cm / 100000.0;
    // 1 KM = 100000 CM
}

int main(){
    //We create an int cm which will store the CM value.
    int cm;

    //We scan for both the variable cm input.
    scanf("%d", &cm);

    //We call the above-defined function and set its value to varible 'km'.
    float km = convert(cm);

    //Print the result with a limited nr. of deciamls to 6.
    printf("Result of conversion: %.6f\n", km);

    return 0;
    // The code is done.
}