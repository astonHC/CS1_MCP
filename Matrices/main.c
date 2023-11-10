/* COPYRIGHT (C) HARRY CLARK */

/* CS1_MCP Matrix Multiplication Calculator */

/* THIS FILE PERTAINS TOWARDS THE MAIN FUNCTIONALITY OF THE PROGRAM */

/* NESTED INCLUDES */

#include "util.h"

static MATRIX MATRIX_1, MATRIX_2;
static MATRIX* RESULT;

int main(int argc, char* argv[])
{

    printf("Input for Matrix 1: \n");
    GET_MATRIX_ELEMENTS(&MATRIX_1);

    printf("\n Input for Matrix 2: \n");
    GET_MATRIX_ELEMENTS(&MATRIX_2);

    if(MATRIX_1.COLUMNS != MATRIX_2.ROWS)
    {
        printf("Matrices cannot be multiplied, invalid dimensional correspondence\n");
        return EXIT;
    }

    RESULT += sizeof(MULTIPLY_MATRICES(&MATRIX_1, &MATRIX_2));

    printf("\nMatrix 1: \n");
    DISPLAY_RESULTS(&MATRIX_1);

    printf("\nMatrix 2: \n");
    DISPLAY_RESULTS(&MATRIX_2);

    printf("\nResult of Multiplication\n");
    DISPLAY_RESULTS(&RESULT);

    return 0;
}
