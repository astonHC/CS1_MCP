/* COPYRIGHT (C) HARRY CLARK */

/* CS1_MCP Boolean Algebraic Expression Calculator */

/* THIS FILE PERTAINS TO THE FUNCTIONALITY REVOLVING AROUND DETERMINING EXPRESSIONS */
/* AND THEIR RELEVANT ARGS */

/* NESTED INCLUDES */

#include "util.h"

#if defined(USE_ARGS)
#define USE_ARGS
#else
#define USE_ARGS

#endif

static struct EXPRESSION* EXP;

#undef USE_ARGS

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

    case 'A': case 'B': case 'C': // THREE ARGS ARE USUALLY PRESENT ON THE TUTORIAL QUESTIONS
        return FIND_TYPE(1, sizeof(EXP));

    default:
        switch(EXP->EXP_BASE)
        {
            case AND:
                return EXP->EXP_READ_L && EXP->EXP_READ_R;

            case OR:
                return EXP->EXP_READ_L || EXP->EXP_READ_R;

            default:
                return false;
        }
    }
}
