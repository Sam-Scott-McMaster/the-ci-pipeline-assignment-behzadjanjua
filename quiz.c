/* Behzad Janjua, 400516103, October 3rd 2024
*
* This file is a quiz game. The user will be quizzed on three different questions. Future additions will include
* a help feature, and bad flags.
*/

#include <stdio.h> //loads input/output
#include <stdlib.h> //loads EXIT_SUCCESS and other important things
#include <string.h> //loads string comparison

int main(int argc, char *argv[]) {

    if (argc == 1) { //If only ./quiz is run, then shows user how to use program.
        puts("\nUsage: quiz [-#] [<answer>]");
        puts("\nTry 'quiz --help' for more information.\n");
        return EXIT_FAILURE;
    }
    
    if (strcmp(argv[1], "--help") == 0) { //If --help is called, then outputs a message on how to use program. 
        puts("Usage: quiz [-#] [<answer>]\n"
            "Try 'quiz --help' for more information.\n"
            "\nAsking a Question:\n"
            "./quiz -1             Question 1\n"
            "./quiz -2             Question 2\n"
            "./quiz -3             Question 3\n"
            "\nAnswering a Question (Replace '' with \"\"):\n"
            "./quiz -1 'answer'    Answering Question 1\n"
            "./quiz -2 'answer'    Answering Question 2\n"
            "./quiz -3 'answer'    Answering Question 3\n"
            "\nAsking for Help:\n"
            "quiz --help\n");
        return EXIT_SUCCESS;
    }
    
    if (argc == 2) { //if there are two arguments, check which question is being asked 
        if (strcmp(argv[1], "-1") == 0) {
            puts("\nQuestion: Is the language C an A:Object-Oriented Language, or B:Procedural Language?\n");
        }
        else if (strcmp(argv[1], "-2") == 0){
            puts("\nQuestion: What Linux command displays file contents?\n");
        }
        else if (strcmp(argv[1], "-3") == 0){
            puts("\nQuestion: Which git command uploads the local repository content to a remote repository?\n");
        }
        //If the argument provided is invalid, it will catch error as a bad flag
        else {
            puts("\nUsage: quiz [-#] [<answer>]");
            puts("\nTry 'quiz --help' for more information.\n");
            return EXIT_FAILURE;
        }
        return EXIT_SUCCESS;
    }

    if (argc >= 3) {
        if (strcmp(argv[1], "-1") == 0) {
            if (strcmp(argv[2], "B") == 0) {
                puts("Success! Correct Answer");
            }
            else if (strcmp(argv[2], "B") == 1) {
                puts("Incorrect Answer");
            }
        }

        else if (strcmp(argv[1], "-2") == 0) {
            if (strcmp(argv[2], "cat") == 0) {
                puts("Success! Correct Answer");
            }
            else if (strcmp(argv[2], "cat") == 1) {
                puts("Incorrect Answer");
            }
        }
        
        else if (strcmp(argv[1], "-3") == 0) {
            if (strcmp(argv[2], "push") == 0) {
                puts("Success! Correct Answer");
            }
            else if (strcmp(argv[2], "push") == 1) {
                puts("Incorrect Answer");
            }
        }
        else {
            puts("\nUsage: quiz [-#] [<answer>]");
            puts("\nTry 'quiz --help' for more information.\n");
            return EXIT_FAILURE;
        }
        return EXIT_SUCCESS;
    }
}