/* 
* Behzad Janjua, 400516103, October 3rd 2024
*
* This file is a quiz game. The user can be quizzed on three different questions, and provide answers using 
* flags. If no arguments are provided, the user is shown a usage guide. The program supports asking questions 
* with flags (-1, -2, -3) and answering those questions by passing an answer as a second argument. It also provides 
* a help message when the user calls the '--help' flag and handles invalid or bad flags by displaying appropriate error messages. 
* The structure of the program is as follows:
*   1. If no arguments are provided, usage instructions are displayed.
*   2. If '--help' is passed as an argument, a detailed help guide is displayed.
*   3. If a valid question flag (-1, -2, or -3) is passed, the corresponding question is displayed.
*   4. If a valid question flag along with an answer is passed, the answer is checked for correctness, and feedback is provided.
*   5. Invalid flags or incorrect inputs trigger an error message with usage instructions.
*/

#include <stdio.h>   // Standard input/output library, used for functions like puts() and printf()
#include <stdlib.h>  // Standard library, used for EXIT_SUCCESS and EXIT_FAILURE macros
#include <string.h>  // String library, used for string comparison with strcmp()

int main(int argc, char *argv[]) {

    // Case 1: No arguments other than the program name are provided
    // Show the user how to use the program by displaying usage instructions
    if (argc == 1) { 
        puts("\nUsage: quiz [-#] [<answer>]");
        puts("\nTry 'quiz --help' for more information.\n");
        return EXIT_FAILURE;  // Exit with failure status since no valid input was given
    }
    
    // Case 2: '--help' flag is provided
    // Display a detailed help guide explaining how to use the quiz program
    if (strcmp(argv[1], "--help") == 0) { 
        puts("Usage: quiz [-#] [<answer>]\n"
            "\nAsking a Question:\n"
            "./quiz -1             Question 1\n"
            "./quiz -2             Question 2\n"
            "./quiz -3             Question 3\n"
            "\nAnswering a Question:\n"
            "./quiz -1 'answer'    Answering Question 1\n"
            "./quiz -2 'answer'    Answering Question 2\n"
            "./quiz -3 'answer'    Answering Question 3\n"
            "\nAsking for Help:\n"
            "Try 'quiz --help' for more information.\n");
        return EXIT_SUCCESS;  // Exit successfully after displaying the help message
    }
    
    // Case 3: A valid question flag is passed as the second argument (argc == 2)
    // Check which question flag is passed and display the corresponding question
    if (argc == 2) { 
        if (strcmp(argv[1], "-1") == 0) {  // Check if flag is '-1' for question 1
            puts("\nQuestion: Is the language C an A:Object-Oriented Language, or B:Procedural Language (Enter A or B)?\n");
        }
        else if (strcmp(argv[1], "-2") == 0){  // Check if flag is '-2' for question 2
            puts("\nQuestion: What Linux command displays file contents (enter answer in lowercase)?\n");
        }
        else if (strcmp(argv[1], "-3") == 0){  // Check if flag is '-3' for question 3
            puts("\nQuestion: Which git command uploads the local repository content to a remote repository (enter answer in lowercase)?\n");
        }
        // If the flag provided is not valid, show usage instructions and exit with failure
        else {
            puts("\nUsage: quiz [-#] [<answer>]");
            puts("\nTry 'quiz --help' for more information.\n");
            return EXIT_FAILURE;  // Exit with failure status for an invalid flag
        }
        return EXIT_SUCCESS;  // Exit successfully after displaying the correct question
    }

    // Case 4: A question flag and an answer are provided (argc >= 3)
    // Check if the user provided a valid question flag and then check the correctness of the answer
    if (argc >= 3) { 
        if (strcmp(argv[1], "-1") == 0) {  // Check if flag is '-1' for question 1
            // Compare the user's answer with the correct answer "B"
            if (strcmp(argv[2], "B") == 0) {
                puts("Success! Correct Answer");  // Display success message if the answer is correct
            }
            else {
                puts("Incorrect Answer");  // Display incorrect message if the answer is wrong
            }
        }

        else if (strcmp(argv[1], "-2") == 0) {  // Check if flag is '-2' for question 2
            // Compare the user's answer with the correct answer "cat"
            if (strcmp(argv[2], "cat") == 0) {
                puts("Success! Correct Answer");  // Display success message if the answer is correct
            }
            else {
                puts("Incorrect Answer");  // Display incorrect message if the answer is wrong
            }
        }
        
        else if (strcmp(argv[1], "-3") == 0) {  // Check if flag is '-3' for question 3
            // Compare the user's answer with the correct answer "push"
            if (strcmp(argv[2], "push") == 0) {
                puts("Success! Correct Answer");  // Display success message if the answer is correct
            }
            else {
                puts("Incorrect Answer");  // Display incorrect message if the answer is wrong
            }
        }
        // If the flag does not match any of the valid question flags, show usage instructions
        else {
            puts("\nUsage: quiz [-#] [<answer>]");
            puts("\nTry 'quiz --help' for more information.\n");
            return EXIT_FAILURE;  // Exit with failure status for an invalid flag
        }
        return EXIT_SUCCESS;  // Exit successfully after evaluating the answer
    }
}
