#pragma once

#ifdef __cplusplus
extern "C" {
#endif
#include <stdint.h>

typedef uint32_t t_ElapsedTime;   // Time to be used for elapsed time
    
t_ElapsedTime ReadElapsedClock(void);

#ifdef __cplusplus
}
#endif