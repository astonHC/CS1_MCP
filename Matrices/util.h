/* COPYRIGHT (C) HARRY CLARK */

/* CS1_MCP Matrix Multiplication Calculator */

/* THIS FILE PERTAINS TOWARDS THE UTILITY USED THROUGHOUT */
/* THE CALCULATOR */

#ifndef UTIL
#define UTIL

/* SYSTEM INCLUDES */

#include <malloc.h>
#include <stdio.h>
#include <stdlib.h>

#if defined(MATRIX_ARGS)
#define MATRIX_ARGS
#else
#define MATRIX_ARGS

typedef struct MATRIX
{
    int** MATRIX_BASE;
    int** RESULT[0];

    int* MATRIX_1;
    int* MATRIX_2;

    union CONTENTS
    {
        int ROWS;
        int COLUMNS;

    } CONTENTS;
    
} MATRIX;

void GET_MATRIX_ELEMENTS();
void MULTIPLY_MATRICES();
void DISPLAY_RESULTS();

#endif

#endif
