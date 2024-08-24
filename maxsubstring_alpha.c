#include <stdio.h>
#include<stdlib.h>
#include <string.h>

char* maxsubstring(const char *str, char alpha, char theta) {
    const char *start = NULL, *end = NULL;
    const char *current_start = NULL;

    for (const char *p = str; *p != '\0'; p++) {
        if (*p == alpha) {
            current_start = p; // Mark the start of a new substring
        }
        if (*p == theta && current_start != NULL) {
            // Update the maximum substring if the current one is longer
            if (end == NULL || (p - current_start) > (end - start)) {
                start = current_start;
                end = p;
            }
        }
    }

    // If we found a valid substring, allocate memory and return it
    if (start != NULL && end != NULL) {
        size_t len = end - start + 2; // +1 for '\0' and +1 for inclusive range
        char *result = (char*)malloc(len);
        if (result != NULL) {
            strncpy(result, start, len - 1);
            result[len - 1] = '\0';
        }
        return result;
    }

    // If no valid substring was found, return NULL
    return NULL;
}

int main() {
    const char *str = "abcabdefghijklmabcthetaxyz";
    char alpha = 'a';
    char theta = 't';

    char *result = maxsubstring(str, alpha, theta);
    if (result) {
	    printf("given string is : %s\n",str);
        printf("Max substring: %s\n", result);
        free(result);
    } else {
        printf("No valid substring found.\n");
    }

    return 0;
}

