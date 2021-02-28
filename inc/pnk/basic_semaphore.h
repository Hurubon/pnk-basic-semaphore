#ifndef PNK_BASIC_SEMAPHORE_INCLUDE_H
#define PNK_BASIC_SEMAPHORE_INCLUDE_H

#include <stdatomic.h>
#include <stdbool.h>

#define PNK_BASIC_SEMAPHORE_INITIALIZE ATOMIC_FLAG_INIT

typedef atomic_flag pnk_basic_semaphore;

_Bool pnk_semaphore_up   (pnk_basic_semaphore volatile* sema,
                          memory_order                  order);
void  pnk_semaphore_down (pnk_basic_semaphore volatile* sema,
                          memory_order                  order);

#endif // PNK_BASIC_SEMAPHORE_INCLUDE_H