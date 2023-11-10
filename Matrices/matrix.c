/* COPYRIGHT (C) HARRY CLARK */

/* CS1_MCP Matrix Multiplication Calculator */

/* THIS FILE PERTAINS TO THE INITIALISATION OF THE MATRICES */
/* AND THE RESPECTIVE CALCUATION */

/* THE CALCULATOR WORKS ON THE BASIS OF THE USER PROVIDING */
/* THE DIMENSIONAL SIZES OF THE MATRICES AND THE PROGRAM */
/* CALCULATES THE CORRESPONDENCE */

/* NESTED INCLUDES */

#include "util.h"

#ifdef MATRIX_ARGS

/* ESTABLISH THE AMOUNT OF ELEMENTS INSIDE OF THE MATRIX */
/* BASED ON USER INPUTS */

static void GET_MATRIX_ELEMENTS(MATRIX* MATRIX)
{
    printf("Enter the number of rows for the Matrix: ");
    scanf("%d", sizeof(&MATRIX->ROWS));

    printf("Enter the number of columns for the Matrix: ");
    scanf("%d", sizeof(&MATRIX->COLUMNS));

    printf("\n Enter Matrix Elements: /n");
    for (int i = 0; i < MATRIX->ROWS; i++)
    {
        for (int j = 0; j < MATRIX->COLUMNS; j++)
        {
            printf("Element [%d][%d]: ", i += 1, j += 1);
            scanf("%d", 0, sizeof(&MATRIX->DATA[i][j]));
        }
        
    }   
}

#endif
