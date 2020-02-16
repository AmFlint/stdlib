//
// Created by AmFlint on 2/16/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include "strings.h"

// strlen: Get the length of a string (without null character)
int am_strlen(char* string)
{
    int position = 0;
    char current_character;

    while((current_character = string[position]) != '\0')
    {
        position++;
    }

    return position;
}

// Unshift: Add a character at the beginning of the string
// string: Array of characters (string) in which you want to add a new character
// character: Character you want to add to the begining of the string
char* am_unshift(char* string, char character)
{
    int i = 0;
    int string_len = am_strlen(string);
    char* new_string = (char *) malloc(sizeof(char) * (string_len + 2));
    new_string[0] = character;

    while (i < string_len)
    {
        new_string[i + 1] = string[i];
        i++;
    }
    // Add Null character at the end of the string
    new_string[string_len + 1] = '\0';

    return new_string;
}
