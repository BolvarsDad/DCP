// validate.c
// Validates the given input file.
// Runs before anything is done to the file to ensure a valid input.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define BUFF_MAX 4096

enum
errCodes
{
	FE_OK,
	FE_BADFILE,
	FE_BADFRMT,
	FE_BADIDX,
	FE_END
};

char const *errStr[FE_END] = 
{
	"Valid file.",
	"Invalid file, unable to open.",
	"Invalid file, bad format.",
	"Invalid file, bad file IDs at lines:"
};

void
tokenize(FILE *fp)
{
	char BUFFER[BUFF_MAX] = {0};
}

int
validate(FILE *fp)
{
	if (fp == NULL)
	{
		return FE_BADFILE;
	}

	return FE_OK;
}