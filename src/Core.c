#include "Core.h"

#include <time.h>

t_ElapsedTime ReadElapsedClock(void)
{
    const time_t Current = time(NULL);

    return (uint32_t)Current;
}
