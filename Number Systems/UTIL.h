/* Copyright (C) Harry Clark 2023 */

/* Student No. 230315257 */

/* CS1 Mathematics for Computing Professionals Number Systems Tool */

/* THIS FILE PERTAINS TO THE MAIN FUNCTIONALITY OF THE NUMBER SYSTEMS */
/* CONTENT COVERED IN WEEK 1, ALL IN CODE FORM */

#ifndef UTIL
#define UTIL

/* SYSTEM INCLUDES */

#include <cstdint>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if defined(NUMBER_UTIL)
#define NUMBER_UTIL
#else
#define NUMBER_UTIL

#define MAX_BINARY_LENGTH   1000
#define HEX_DIGIT_SIZE      4
#define BINARY_STR_LENGTH(NUM)  strlen(NUM)
#define OCTAL_DIGIT_SIZE    3

typedef struct BINARY_NUMBER
{
    char* BINARY;
    char* HEXADECIMAL;
    char* OCTAL;

    int DIGIT;
    int WEIGHT;
};

#endif

#endif