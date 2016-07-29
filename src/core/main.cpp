// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include <memory>
#include "StevedoreConfig.h"

int main () {
    fprintf(stdout,"Stevedore v%d.%d.%d\n",
            Stevedore_VERSION_MAJOR,
            Stevedore_VERSION_MINOR,
            Stevedore_VERSION_PATCH);
    return 0;
}
