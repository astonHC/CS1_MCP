/* COPYRIGHT (C) HARRY CLARK */

/* CS1_MCP Boolean Algebraic Expression Calculator */

/* THIS FILE PERTAINS TO THE MAIN FUNCTIONALITY OF THE PROGRAM */

/* SYSTEM INCLUDES */

#ifndef BOOLEAN_CALC
#define BOOLEAN_CALC

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
    char NAME;
    bool VALUE;
};

#endif

#undef USE_ARGS

/* FIND THE VARIABLE TYPE BY NAME IN ASSOCIATION WITH THE LIST OF EXPRESSIONS */
/* ASSUMING AN ARBITARY LENGTH OF THE PROPOSITION, EVALUATE IT BASED ON HOW MANY EXPRESSIONS THERE ARE */

static bool FIND_TYPE(struct EXPRESSION* EXP, size_t VAR_COUNT, char VAR_NAME)
{
    for (size_t i = 0; i < VAR_COUNT; i++)
    {
        if(EXP[i].NAME == VAR_NAME)
        {
            return EXP->VALUE;
        }
    }

    return false;   
}

#endif