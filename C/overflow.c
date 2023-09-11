//write a function that takes input from the user and prints it to the screen //me
#include <stdio.h> //me
main() //me
{ //me
    char input[10]; //co-pilot
    printf("Enter a string: "); //co-pilot
    scanf("%s", input); //co-pilot - vulnerable to buffer overflow
    printf("You entered: %s\n", input); //co-pilot

} //co-pilot
