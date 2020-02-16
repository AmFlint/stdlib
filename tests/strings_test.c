//
// Created by AmFlint on 2/16/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include "../strings.h"

// Returns 0 if not the same, returns 1 if same
int compare_strings(char* str1, char* str2)
{
    int str1_len = am_strlen(str1);
    int str2_len = am_strlen(str2);
    if (str1_len != str2_len)
    {
        return 0;
    }

    int i = 0;
    while(i < str1_len)
    {
        if (str1[i] != str2[i])
        {
            return 0;
        }
        i++;
    }

    return 1;
}

int main()
{
    // -- Testing for the string package -- //
    char test_strings_1[5] = "test";

    int result = am_strlen(test_strings_1);
    if (result != 4)
    {
        printf("got length: %d, expected 4", result);
        exit(1);
    }

    char test_strings_2[1] = "";
    result = am_strlen(test_strings_2);
    if (result != 0)
    {
        printf("got length %d, expected 0", result);
        exit(1);
    }

    // Testing unshift
    char test_unshift_1[5] = "test";
    char* new_str = am_unshift(test_unshift_1, 'o');
    char expected_str[6] = "otest";

    if (compare_strings(new_str, expected_str) == 0)
    {
        printf("got new string %s, expected %s", new_str, expected_str);
        exit(1);
    }
}