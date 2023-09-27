/* Copyright (C) Harry Clark 2023 */

/* Student No. 230315257 */

/* CS1 Mathematics for Computing Professionals Number Systems Tool */

/* THIS FILE PERTAINS TO THE MAIN FUNCTIONALITY OF THE NUMBER SYSTEMS */
/* CONTENT COVERED IN WEEK 1, ALL IN CODE FORM */

/* SYSTEM INCLUDES */

#include <cstdint>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BINARY_LENGTH				1000
#define HEX_DIGIT_SIZE					4
#define BINARY_STR_LENGTH(NUM)			strlen(NUM)

typedef uint32_t U32;

typedef struct BINARY_NUMBER
{
	char* BINARY;
	char* HEXADECIMAL;
	char* OCTAL;

	int DIGIT;
	int WEIGHT;
};

/* ASSUMING THAT THE LENGTH OF THE NUMBER IS EQUAL TO THE MAX SIZE */
/* ALLOCATE MEMORY FOR THE HEX REPRESENTATION */

/* THIS DETERMINES HOW MANY DIGITS ARE REQUIRED */

static void BINARY_TO_HEX(BINARY_NUMBER* NUMBER)
{
	int LENGTH = BINARY_STR_LENGTH(NUMBER->BINARY);
	int HEX_DIGITS = LENGTH / HEX_DIGIT_SIZE;

	if (LENGTH % HEX_DIGIT_SIZE != 0) HEX_DIGITS++;

	NUMBER->HEXADECIMAL = (char*)malloc(HEX_DIGITS + 1);

	for (int i = LENGTH - 1, j = HEX_DIGITS - 1; i >= 0; i--, NUMBER->WEIGHT *= 2)
	{
		if (NUMBER->BINARY[i] == '1') NUMBER->DIGIT += NUMBER->WEIGHT;

		if (NUMBER->WEIGHT == 8 || i == 0)
		{
			if (NUMBER->DIGIT < 10)
			{
				sizeof(NUMBER->HEXADECIMAL[j] += '0' + NUMBER->DIGIT);
			}

			else
			{
				sizeof(NUMBER->HEXADECIMAL[j] += 'A' + NUMBER->DIGIT - 10);
			}
		}
	}
}

/* ALLOCATE FOR THE CORRESPONDING AMOUNT OF DIGITS NEEDED FOR THE HEX STRING */

static void INIT_HEX_STRING(BINARY_NUMBER* NUMBER, U32 HEX_DIGITS)
{
	memset(NUMBER->HEXADECIMAL, '0', HEX_DIGITS);
	NUMBER->HEXADECIMAL[HEX_DIGITS] = '0';

}

int main(int argc, char* argv[])
{
	BINARY_NUMBER NUMBER;

	BINARY_TO_HEX(&NUMBER);
}
