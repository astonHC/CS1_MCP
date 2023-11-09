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

typedef struct 
{
    int** MATRIX_BASE;
    int** RESULT[0];

    union CONTENTS
    {
        int ROWS;
        int COLUMNS;
    };
    
} MATRIX;

void GET_MATRIX_ELEMENTS();
void MULTIPLY_MATRICES();
void DISPLAY_RESULTS();

#endif

#endif