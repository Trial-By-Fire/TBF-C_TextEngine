#pragma once

// Includes

// Trial By Fire

#include "C_Assist.h"
#include "FundamentalTypes.h"



// Aliases

alias(struct CString_Def) as CString;   // C-Strings with specified pointer to array, and length.



// Structures

struct CString_Def
{
	char array[13];

	uInt64 length;
};



// Instances

Stack(CString) StartMessage;   // Contains Hello World! message.



// Functions

// Sets up start message with the data.
fn returns(void) SetupStartMessage(void)
{
	StartMessage.length = 13U;

	StartMessage.array[ 0] = 'H' ;
	StartMessage.array[ 1] = 'e' ;
	StartMessage.array[ 2] = 'l' ;
	StartMessage.array[ 3] = 'l' ;
	StartMessage.array[ 4] = 'o' ;
	StartMessage.array[ 5] = ' ' ;
	StartMessage.array[ 6] = 'W' ;
	StartMessage.array[ 7] = 'o' ;
	StartMessage.array[ 8] = 'r' ;
	StartMessage.array[ 9] = 'l' ;
	StartMessage.array[10] = 'd' ;
	StartMessage.array[11] = '!' ;
	StartMessage.array[12] = '\0';
}
