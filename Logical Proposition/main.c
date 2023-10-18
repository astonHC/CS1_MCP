/* COPYRIGHT (C) HARRY CLARK */

/* CS1_MCP Boolean Algebraic Expression Calculator */

/* THIS FILE PERTAINS TO THE MAIN FUNCTIONALITY OF THE PROGRAM */

#ifndef BOOLEAN_CALC
#define BOOLEAN_CALC

/* NESTED INCLUDES */

#include <util.h>

/* SYSTEM INCLUDES */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#if defined(USE_ARGS)
#define USE_ARGS
#else
#define USE_ARGS

typedef struct EXPRESSION
{
    char EXP_BASE;
    char EXP_NAME;
    char EXP_OPERAND;
    bool EXP_VALUE;
    bool EXP_READ_L;
    bool EXP_READ_R;
    size_t EXP_LEN;
};

#endif

#undef USE_ARGS

struct EXPRESSION* EXP;

/* FIND THE VARIABLE TYPE BY NAME IN ASSOCIATION WITH THE LIST OF EXPRESSIONS */
/* ASSUMING AN ARBITARY LENGTH OF THE PROPOSITION, EVALUATE IT BASED ON HOW MANY EXPRESSIONS THERE ARE */

static bool FIND_TYPE(size_t VAR_COUNT, char VAR_NAME)
{
    for (size_t i = 0; i < VAR_COUNT; i++)
    {
        if(EXP[i].EXP_NAME == VAR_NAME)
        {
            return EXP->EXP_VALUE;
        }
    }

    return false;   
}

/* EVALUATE THE EXPRESSION RECURSIVELY IN CONJUNCTION WITH AN ARBITARY LENGTH OF THE DESIRED PROPOSITION */

static bool EVALUAATE_TYPE()
{
    switch (EXP->EXP_BASE)
    {

    // BLANK USE CASE FOR ASSUMING ARBITARY EXPRESSION

    case ' ':
        return EVALUAATE_TYPE(EXP->EXP_BASE + 1, sizeof(EXP));

    case 'T':
        return true;

    case 'F':
        return false;



    default:
        break;
    }
}

#endif
