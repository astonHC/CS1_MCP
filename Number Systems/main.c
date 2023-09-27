/* Copyright (C) Harry Clark 2023 */

/* Student No. 230315257 */

/* CS1 Mathematics for Computing Professionals Number Systems Tool */

/* THIS FILE PERTAINS TO THE MAIN FUNCTIONALITY OF THE NUMBER SYSTEMS */
/* CONTENT COVERED IN WEEK 1, ALL IN CODE FORM */

/* SYSTEM INCLUDES */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable : 4996)

#define MAX_BINARY_LENGTH              1000
#define HEX_DIGIT_SIZE                    4
#define BINARY_STR_LENGTH(NUM)  strlen(NUM)

typedef struct BINARY_NUMBER
{
    char* BINARY;
    char* HEXADECIMAL;
    char* OCTAL;

    int DIGIT;
    int WEIGHT;
};

static BINARY_NUMBER* NUMBER;
static int HEX_DIGITS = 0;

/* ASSUMING THAT THE LENGTH OF THE NUMBER IS EQUAL TO THE MAX SIZE */
/* ALLOCATE MEMORY FOR THE HEX REPRESENTATION */

/* THIS DETERMINES HOW MANY DIGITS ARE REQUIRED */

static void BINARY_TO_HEX(BINARY_NUMBER* NUMBER)
{
    int LENGTH = BINARY_STR_LENGTH(NUMBER->BINARY);
    int HEX_DIGITS = LENGTH / HEX_DIGIT_SIZE;

    if (LENGTH % HEX_DIGIT_SIZE != 0) HEX_DIGITS++;

    NUMBER->HEXADECIMAL = (char*)malloc(HEX_DIGITS + 1);

    for (int i = LENGTH - 1, j = HEX_DIGITS - 1; i >= 0; i--, NUMBER->WEIGHT *= 2)
    {
        if (NUMBER->BINARY[i] == '1') NUMBER->DIGIT += NUMBER->WEIGHT;

        if (NUMBER->WEIGHT == 8 || i == 0)
        {
            if (NUMBER->DIGIT < 10)
            {
                NUMBER->HEXADECIMAL[j] = '0' + NUMBER->DIGIT; 
            }
            else
            {
                NUMBER->HEXADECIMAL[j] = 'A' + NUMBER->DIGIT - 10; 
            }

            NUMBER->DIGIT = 0;
            NUMBER->WEIGHT = 1;
            j--;
        }
    }
}

/* ALLOCATE FOR THE CORRESPONDING AMOUNT OF DIGITS NEEDED FOR THE HEX STRING */
/* THIS IS DONE BY ALLOCATING THE PRE-REQUISITE AMOUNT OF MEMORY NEEDED */

static void INIT_HEX_STRING()
{
    if (HEX_DIGITS > 0) 
    {
        NUMBER->HEXADECIMAL = (char*)malloc(HEX_DIGITS + 1);

        if (NUMBER->HEXADECIMAL) 
        {
            memset(NUMBER->HEXADECIMAL, '0', HEX_DIGITS);
            NUMBER->HEXADECIMAL[HEX_DIGITS] = '\0';
        }

        else 
        {
            perror("Memory allocation failed");
            exit(1);
        }
    }
}

int main(int argc, char* argv[])
{
    BINARY_NUMBER NUMBER;
    NUMBER.BINARY = (char*)malloc(MAX_BINARY_LENGTH);
    INIT_HEX_STRING();

    if (!NUMBER.BINARY)
    {
        perror("Lmao you cannot convert this number, there must be a Seg Fault somewhere");
        return 1;
    }

    printf("Enter a Binary Number: \n");
    int RESULT = scanf("%s", NUMBER.BINARY);

    BINARY_TO_HEX(&NUMBER);

    printf("Hexadecimal Equivalent: %s\n", NUMBER.HEXADECIMAL);

    free(NUMBER.BINARY);
    free(NUMBER.HEXADECIMAL);

    return 0;

}
