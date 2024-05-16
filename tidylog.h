#ifndef __TIDYLOG_H
#define __TIDYLOG_H

#include "tidylog_port.h"

/**
 * @brief  macro indicates wether using the symbol `inline` to optimize a function.
*/
#define TIDYLOG_USE_INLINE 1
#if TIDYLOG_USE_INLINE
    #define __TIDYLOG_INLINE inline
#else
    #define __TIDYLOG_INLINE
#endif

#endif