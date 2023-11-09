/* COPYRIGHT (C) HARRY CLARK */

/* CS1_MCP Matrix Multiplication Calculator */

/* THIS FILE PERTAINS TOWARDS THE MAIN FUNCTIONALITY OF THE PROGRAM */

/* NESTED INCLUDES */

#include "util.h"

int main(void)
{
    MATRIX MATRIX;

    printf("Enter rows and columns for Matrix 1");
    scanf("%d", &MATRIX.CONTENTS.ROWS);

    GET_MATRIX_ELEMENTS(&MATRIX, MATRIX.CONTENTS.ROWS, MATRIX.CONTENTS.COLUMNS);
    MULTIPLY_MATRICES();
    DISPLAY_RESULTS();
}
