/* Behzad Janjua, 400516103, October 3rd 2024
*
* This file is a quiz game. The user will be quizzed on three different questions. ADD 
* MOREEEEEEEEEEEEEE
*/

#include <stdio.h> //input/output
#include <stdlib.h> //loads EXIT_SUCCESS and other important things
#include <string.h> //loads string comparison

int main(int argc, char *argv[]) {
    if (strcmp(argv[1], "-1") == 0) {
        puts("Is the language C an Object-Oriented Language, or a Procedural Language?\n"); //procedural
        return EXIT_SUCCESS;
    }
    
    else if (strcmp(argv[1], "-2") == 0) {
        puts("What Linux command displays file contents?\n"); //cat
        return EXIT_SUCCESS;
    }
    
    else if (strcmp(argv[1], "-3") == 0) {
        puts("Which git command uploads the local repository content to a remote repository?\n"); //push 
        return EXIT_SUCCESS;
    }
    
}