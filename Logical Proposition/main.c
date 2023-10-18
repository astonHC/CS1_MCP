/* COPYRIGHT (C) HARRY CLARK */

/* CS1_MCP Boolean Algebraic Expression Calculator */

/* THIS FILE PERTAINS TO THE MAIN FUNCTIONALITY OF THE PROGRAM */

/* NESTED INCLUDES */

#include "util.h"

int main(int argc, char* argv[])
{
    struct EXPRESSION* EXP;

    // DYNAMICALLY ALLOCATE THE PROPRIATORY MEMORY NEEDED
    // SUCH THAT THE PROGRAM CAN DETERMINE THE SIZE OF HOW MANY
    // ARGS ARE PRESENT

    if(argc != 2)
    {
        EXP->EXP_COUNT = (size_t*)malloc(sizeof(EXP) / sizeof(EXP[0]));
    }
}

