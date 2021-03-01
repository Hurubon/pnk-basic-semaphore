#include <stdio.h>
#include <stdbool.h>

#include <pnk/basic_semaphore.h>

int main(void)
{
    pnk_basic_semaphore sema = PNK_BASIC_SEMAPHORE_INITIALIZE;
    _Bool flag;

    flag = pnk_semaphore_up(&sema, memory_order_relaxed);
    printf("Initial value: %d\n", flag);

    pnk_semaphore_down(&sema, memory_order_relaxed);

    flag = pnk_semaphore_up(&sema, memory_order_relaxed);
    printf("After putting it down: %d\n", flag);

    flag = pnk_semaphore_up(&sema, memory_order_relaxed);
    printf("Putting it up again: %d\n", flag);
}