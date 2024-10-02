/* Behzad Janjua, 400516103, October 3rd 2024
*
* This file is a quiz game. The user will be quizzed on three different questions. Future additions will include
* a help feature, and bad flags.
*/

#include <stdio.h> //input/output
#include <stdlib.h> //loads EXIT_SUCCESS and other important things
#include <string.h> //loads string comparison

int main(int argc, char *argv[]) {

    if (strcmp(argv[1], "-1") == 0) {
        puts("\nQuestion: Is the language C an Object-Oriented Language, or a Procedural Language?\n"); //procedural
        if (argc > 2 && strcmp(argv[2], "Procedural") == 0) {
            puts("Success, correct answer!");
        }
        else if (argc > 2 && strcmp(argv[2], "Procedural") == 1) {
            puts("Incorrect attempt... better luck next time!");
        }
        return EXIT_SUCCESS;
    }
    
    else if (strcmp(argv[1], "-2") == 0) {
        puts("\nQuestion: What Linux command displays file contents?\n"); //cat
        if (argc > 2 && strcmp(argv[2], "cat") == 0) { 
            puts("Success, correct answer!");
        } 
        else if (argc > 2 && strcmp(argv[2], "cat") == 1) {
            puts("Incorrect attempt... better luck next time!");
        }
        return EXIT_SUCCESS;
    }

    //UNRELATED, ADD A GIT PUSH ORIGIN MAIN TO BASH SCRIPT
    else if (strcmp(argv[1], "-3") == 0) {
        puts("\nQuestion: Which git command uploads the local repository content to a remote repository?\n"); //push 
        if (argc > 2 && strcmp(argv[2], "push") == 0) { 
            puts("Success, correct answer!");
        } 
        else if (argc > 2 && strcmp(argv[2], "push") == 1) {
            puts("Incorrect attempt... better luck next time!");
        }
        return EXIT_SUCCESS;
    }
    if (strcmp(argv[1], "--help") == 0) {
        puts("\nAsking a Question:");
        puts("./quiz -1             Question 1");
        puts("./quiz -2             Question 2");
        puts("./quiz -3             Question 3");
        puts("\nAnswering a Question (Replace '' with ""):"); 
        puts("./quiz -1 'answer'    Answering Question 1");
        puts("./quiz -2 'answer'    Answering Question 1");
        puts("./quiz -3 'answer'    Answering Question 1");
        puts("\nAsking for Help:");
        puts("quiz --help");
        return EXIT_SUCCESS;
    }
}