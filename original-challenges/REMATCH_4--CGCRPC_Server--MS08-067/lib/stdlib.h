/*

Copyright (c) 2015 Cromulence LLC

Authors: Cromulence <cgc@cromulence.com>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

*/
#ifndef __STDLIB_H__
#define __STDLIB_H__

#include <libcgc.h>
#include "stdint.h"

#define RAND_MAX	2147483647
#define FLAG_PAGE 0x4347c800

void srand(void);
uint32_t rand( void );
uint32_t random_in_range(uint32_t min, uint32_t max);
void populate_random_string( char * s, uint32_t length );

int atoi( const char *pStr );
double atof( char *pStr );
 
char *strcpy( char *pDest, const char *pSource );
char *strncpy( char *pDest, const char *pSource, size_t maxlen );
void *cgc_memcpy( void *pDest, const void *pSrc, size_t nbytes );

long int strtol( const char *str, char **endptr, int base );

#endif // STDLIB_H__
