#ifndef PLATFORM_TYPES_H_INCLUDED
#define PLATFORM_TYPES_H_INCLUDED

#define <stdbool.h>
#define <stdint.h>


#include <stdbool.h>

//types

typedef _Bool       						boolean;
typedef char 								char_t;
typedef signed char 						sint8_t;
typedef unsigned char 						uint8_t;
typedef signed short 						sint16_t;
typedef unsigned short 						uint16_t;
typedef signed int 							sint32_t;
typedef unsigned int 						uint32_t;
typedef signed long long int  				sint64_t;
typedef unsigned long long int  			uint64_t;


typedef volatile signed char 				vsint8_t;
typedef volatile unsigned char 				vuint8_t;
typedef volatile signed short 				vsint16_t;
typedef volatile unsigned short 			vuint16_t;
typedef volatile signed int 				vsint32_t;
typedef volatile unsigned int 				vuint32_t;
typedef volatile signed long long int 		vsint64_t;
typedef volatile unsigned long long int 	vuint64_t;

typedef float 								float32_t;
typedef double 								double64_t;


//Defines
#ifndef FALSE
#define FALSE								(boolean)0
#endif

#ifndef TRUE
#define TRUE								(boolean)1
#endif







#endif // PLATFORM_TYPES_H_INCLUDED
