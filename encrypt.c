#include "encrypt.h"

void encrupt (char *message)
{
    while (*message) {
        *message = *message ^ 31;
        message++;
    }
}