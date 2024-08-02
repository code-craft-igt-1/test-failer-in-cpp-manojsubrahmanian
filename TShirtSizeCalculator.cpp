#include <assert.h>
#include <iostream>
#include "TShirtSizeCalculator.h"

char Size(int cms) {
    const int SMALL_MAX = 37;
    const int MEDIUM_MAX = 41;

    char sizeName = 'L';

    if (cms <= SMALL_MAX) {
        sizeName = 'S';
    } else if (cms <= MEDIUM_MAX) {
        sizeName = 'M';
    }

    return sizeName;
}


