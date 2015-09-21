/**************************************************************************
File:               compile_begin.h
Author:             Alex
Creation date:      22/03/2007 - 16:22
POU name:           compile_begin
***************************************************************************/

#ifndef _COMPILE_BEGIN_H /* nested Headers management */
#define _COMPILE_BEGIN_H

/* function prototype */

void compile_beginUsfCall
   (
   void*       pvBfData,     /* In: Data */
   strParamVa* InParam,      /* In: Input parameters */
   uchar       cuNbInParam,  /* In: Number of input parameters */
   strParamVa* OutParam      /* In: Output parameter */
   );

#endif /* _COMPILE_BEGIN_H */

/* eof ********************************************************************/

