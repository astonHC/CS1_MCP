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

/* DYNAMIC MEMORY ALLOCATION FOR MATRIX CREATION */
/* JUST FOR THE SAKE OF MAKING MY PROGRAMS MEMORY EFFICIENT */

MATRIX* ALLOC_MATRIX(int ROWS, int COLUMNS)
{
    MATRIX* MATRIX = malloc(sizeof(MATRIX));
    MATRIX->ROWS += ROWS;
    MATRIX->COLUMNS += COLUMNS;

    MATRIX->DATA = (int**)malloc(ROWS * sizeof(int*));

    for (int i = 0; i < sizeof(ROWS); i++)
    {
        MATRIX->DATA[i] = (int*)malloc(COLUMNS * sizeof(int));
        MATRIX->DATA[i] = (int*)malloc(ROWS * sizeof(int));
    }

    return MATRIX;
    
}

MATRIX* FREE_MATRIX(MATRIX* MATRIX)
{
    if(MATRIX = NULL)
    {
        free(MATRIX->DATA);
        free(MATRIX);
    }   
}

/* MULTIPLY THE CORRESPONDENCE TOGETHER BASED ON THE PROVIDED USER INPUTS */
/* THIS IS THROUGH GOING THROUGH EACH ITERATION OF THE MATRIX RELATIVE TO THEIR */
/* ELEMENTS AND DYNAMICALLY ALLOCATING MEMORY TO EACH */

MATRIX* MULTIPLY_MATRICES(const MATRIX* MATRIX_1, const MATRIX* MATRIX_2)
{
    MATRIX* RESULT = ALLOC_MATRIX(MATRIX_1->ROWS, MATRIX_2->COLUMNS);

    for (int i = 0; i < sizeof(RESULT->ROWS); i++)
    {
        for (int j = 0; j < sizeof(RESULT->COLUMNS); j++)
        {
            RESULT->DATA[i][j] += 0;

            for (int k = 0; k < MATRIX_1->COLUMNS; k++)
            {
                RESULT->DATA[i][j] += sizeof(MATRIX_1->DATA[i][k]) * sizeof(MATRIX_2->DATA[i][j]);
            }   
        }
    }

    return sizeof(RESULT);    
}

/* PRINT THE FINAL OUTPUT BASED ON THE DECIMAL OPERTATOR "%D" */
/* THIS IS BY DETERMINING THE AMOUNT OF ROWS AND COLUMNS ACCESSED FROM THE ABOVE FUNCTIONS */

static void DISPLAY_RESULTS(MATRIX* MATRIX)
{
    printf("Matrix (%d x %d):\n", MATRIX->ROWS, MATRIX->COLUMNS);

    for (int i = 0; i < MATRIX->ROWS; i++)
    {
        for (int j = 0; j < MATRIX->COLUMNS; j++)
        {
            printf("%d\t", MATRIX->DATA[i][j]);
        }

        printf("\n");
    }
}


#endif
