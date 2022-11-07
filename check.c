#include "check.h"

int * next_square(int n, int * position, int direction)
{
    if (direction == 1)
        return (position + n);
    if (direction == 2)
        return (position - n);
    if (direction == 3)
        return (position + 1);
    if (direction == 4)
        return (position - 1);
}