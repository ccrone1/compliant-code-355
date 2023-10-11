#include <iostream>
#include <cstring>

using namespace std;

/**
 *@brief a simple program that is based on the documentation to avoid truncation from the fgets API
 */
int main() {
    char input[10]; // I made the buffer small to check the size of the input
    
    cout << "Please enter a sentence (or any amount of data to be checked for truncation). Keep in mind, the buffer is only an array of 10 chararcters. " << endl;
    
    // I did need to look at the example documentation to see how to check for truncation
    if (fgets(input, sizeof(input), stdin)) {
        size_t len = strlen(input);
        if (feof(stdin) || (len != 0 && input[len - 1] == '\n')) { //checks the size of the input (either eof of a newline represents no truncation in the buffer
            cout << "Your sentence (or other input is): " << input;
        }
        else {
            cerr << "The user input is too long, and we are going to avoid truncation" << endl; // I print out an error as opposed to having unintended truncation
        }
    }
    
    return 0;
}

