#include <assert.h>
#include <iostream>
#include "TShirtSizeCalculator.h"

char Size(int cms) {
    const int SMALL_MAX = 37;
    const int MEDIUM_MAX = 41;

    char sizeName = 'L'; // Default to 'L' (Large size)
    
    if (cms <= SMALL_MAX) {
        sizeName = 'S'; // Small size
    } else if (cms <= MEDIUM_MAX) {
        sizeName = 'M'; // Medium size
    }

    return sizeName;
}


