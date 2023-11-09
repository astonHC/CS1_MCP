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

static MATRIX* MATRIX_OBJ;

/* ESTABLISH THE AMOUNT OF ELEMENTS INSIDE OF THE MATRIX */
/* BASED ON USER INPUTS */

static void GET_MATRIX_ELEMENTS(int** MATRIX, int ROW, int COLUMN)
{
    printf("\n Enter Matrix Elements: /n");

    for (int i = 0; i < MATRIX_OBJ->CONTENTS.ROWS; i++)
    {
        for (int j = 0; j < MATRIX_OBJ->CONTENTS.COLUMNS; j++)
        {
            printf("Enter a%d%d: ", i += 1, j += 1);
            scanf("%d", 0, sizeof(MATRIX_OBJ->MATRIX_BASE[i][j]));
        }
        
    }   
}

/* MULTIPLY THE CORRESPONDENCE BASED ON THE USER INPUTS */

static void MULTIPLY_MATRICES()
{
    for (int i = 0; i < MATRIX_OBJ->CONTENTS.ROWS; i++)
    {
        for (int j = 0; j < MATRIX_OBJ->CONTENTS.COLUMNS; j++)
        {
            for (int k = 0; k < MATRIX_OBJ->CONTENTS.COLUMNS; k++)
            {
                MATRIX_OBJ->RESULT[i][j] += MATRIX_OBJ->MATRIX_1[i][k] * MATRIX_OBJ->MATRIX_2[k][j];
            }
        }
    }
}

#endif
