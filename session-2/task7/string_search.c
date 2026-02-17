
/* 
 * Write a program that reads in a line of text from the command line
 * 1. concatenates all the command line arguments into one string
 * 2. searches for the first occurrence of a given character
 * eg. use "The quick brown fox" on the command line and locate 'k'
 * Hint: argv is an array so you can use a simple for-loop
 * Hint: string library functions strcat() and strcspn() can be used
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct String {
    char* arr;
    int size;
    int capacity;
};
void resize(struct String* str) {
    char* temp = str->arr;
    str->arr = malloc(str->capacity*sizeof(char)+10);
    memcpy(&str->arr, temp, str->size*sizeof(char));
    str->capacity +=10;
    free(temp);
}

void append(struct String* str, const char* data) {
    int dataSize = strlen(data);
    while (dataSize > str->capacity) {
        resize(str);
    }
    memcpy(&str->arr[str->size], data, strlen(data)*sizeof(char));
    str->size += dataSize;
    str->arr[str->size] = '\0';
}

void strInit(struct String* str) {
    str->arr = malloc(sizeof(char) * 2);
    str->arr[0] = '\0';
    str->size = 0;
    str->capacity = 2*sizeof(char);
}
void printString(struct String* str) {
    printf("%s\n", str->arr);
}

int main( int argc, char **argv ) {

    struct String string;
    strInit(&string);
    append(&string, "dfhsdfesdfslewwerwerdfgvdfghsfhsfjfjghduyasdgbfyuasdgbfuoyasdgfuosadgfyasdgfudsygsdffe");
    printString(&string);


    return 0;
}