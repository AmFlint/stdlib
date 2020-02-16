//
// Created by AmFlint on 2/16/2020.
//

#include "strconv.h"

int* get_ascii_codes()
{
    int start = 48, i = 0;
    int ascii_codes[10];

    while(i < 10)
    {
        ascii_codes[i] = start + i;
        i++;
    }

    return ascii_codes;
}

int atoi(char* string)
{
    int ascii_codes[10] = get_ascii_codes();
}

char* itoa(int number)
{
    int ascii_codes[10] = get_ascii_codes();
    int i = 0;
    char* number_to_string;

    while(number > 0)
    {
        int current_digit = number % 10;
        // Add current digit to string
        number /= 10;
    }
}
