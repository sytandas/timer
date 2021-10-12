#ifndef _timer_head_
#define _timer_head_

#include <time.h>

#define B 1000000000

void stopwatch();
void countdown(struct timespec duration);

#endif
