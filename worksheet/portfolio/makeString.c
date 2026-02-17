
/*
Name:
Student ID:
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char **argv ) {
    // define appropriate data to hold your answer
    // process the command-line data using appropriate string functions
    for (int i=1;i<argc;i++) {
        if (i < argc-1) {
            printf("%s-", argv[i]);
        }
        else {
            printf("%s\n", argv[i]);
        }
        
    }
    //printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}