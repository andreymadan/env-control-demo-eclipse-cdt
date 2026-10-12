#if !defined(_WIN32)
#define _POSIX_C_SOURCE 199309L
#endif

#include "clock_driver.h"

#if defined(_WIN32)
#include <windows.h>
#else
#include <time.h>
#endif

unsigned long Clock_GetSeconds(void)
{
#if defined(_WIN32)
    return (unsigned long)(GetTickCount64() / 1000ULL);
#else
    return (unsigned long)time(0);
#endif
}

void Clock_DelayMs(unsigned int milliseconds)
{
#if defined(_WIN32)
    Sleep(milliseconds);
#else
    struct timespec req;
    req.tv_sec = milliseconds / 1000U;
    req.tv_nsec = (long)(milliseconds % 1000U) * 1000000L;
    nanosleep(&req, 0);
#endif
}
