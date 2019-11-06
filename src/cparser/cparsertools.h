/*
 * cparsertools.h
 *
 *  Created on: 2/11/2019
 *      Author: blue
 */

#ifndef CPARSERTOOLS_H_
#define CPARSERTOOLS_H_


/* String type handling */
#define _T	(uint8_t *)
#define _t  (char *)

/* Growth speed for arrays */
#define ARRAY_GROWTH_SPEED 			10

/* Maximum identifier lenght */
#define MAX_IDENTIFIER_LENGTH		1023

/* Maximum sentence lenght */
#define MAX_SENTENCE_LENGTH			65534

/* Maximum comment lenght */
#define MAX_COMMENT_LENGTH			65534

/* String duplication functions */
const uint8_t *StrDup(const char *s);
const uint8_t *StrDup(const uint8_t *s);

template<typename T>
void AddToPtrArray(T data, T *(&array), uint32_t &size, uint32_t &count);


#endif /* CPARSERTOOLS_H_ */