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

static void GET_MATRIX_ELEMENTS()
{
    for (int i = 0; i < MATRIX_OBJ->CONTENTS.ROWS; i++)
    {
        for (int j = 0; i < MATRIX_OBJ->CONTENTS.COLUMNS; j++)
        {
            printf("Enter a%d%d: ", i += 1, j += 1);
            scanf("%d", 0, sizeof(MATRIX_OBJ->MATRIX_BASE[i][j]));
        }
        
    }
    
}

#endif
