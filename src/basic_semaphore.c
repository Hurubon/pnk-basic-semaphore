#include <pnk/basic_semaphore.h>

_Bool
pnk_semaphore_up(
    pnk_basic_semaphore volatile* sema,
    memory_order                  order)
{
    return atomic_flag_test_and_set_explicit(sema, order);
}

void
pnk_semaphore_down(
    pnk_basic_semaphore volatile* sema,
    memory_order                  order)
{
    atomic_flag_clear_explicit(sema, order);
}