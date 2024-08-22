#include <assert.h>
#include <iostream>
#include "TShirtSizeCalculator.h"

char Size(int cms) {
    const int SMALL_MAX = 38;
    const int MEDIUM_MAX = 40;
    const int LARGE_SIZE = 42;

    char sizeName = 'L';

    if (cms <= SMALL_MAX) {
        sizeName = 'S';
    } else if (cms <= MEDIUM_MAX) {
        sizeName = 'M';
    } else if (cms <= LARGE_SIZE) {
        sizeName = 'L';
    } else {
        sizeName = 'X';
    }


    return sizeName;
}


