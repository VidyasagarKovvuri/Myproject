/*#include<stdio.h>
void main()
{
	char *p = "Hyderabad";
	char q[20] = "banglore";

	printf("Before swapping\np = %s\nq[20] = %s\n",p,q);
 
	for(int i = 0;p[i];i++)
	{
		q[i] = p[i];
	}

	p = "banglore";

	printf("After swapping\np = %s\nq[20] = %s\n",p,q);
}*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Initialize strings
    char *ptr = strdup("hyderabad"); // Use strdup to allocate memory and copy the string
    char ptr1[] = "bangalore";

    // Print original strings
    printf("Before swapping:\n");
    printf("ptr: %s\n", ptr);
    printf("ptr1: %s\n", ptr1);

    // Calculate the lengths of the strings
    int len1 = strlen(ptr);
    int len2 = strlen(ptr1);

    // Allocate temporary storage
    char *temp = (char *)malloc((len1 + 1) * sizeof(char));
    if (temp == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Swap the contents
    strcpy(temp, ptr);      // temp = "hyderabad"
    strcpy(ptr, ptr1);      // ptr = "bangalore"
    strcpy(ptr1, temp);     // ptr1 = "hyderabad"

    // Print swapped strings
    printf("After swapping:\n");
    printf("ptr: %s\n", ptr);
    printf("ptr1: %s\n", ptr1);

    // Free allocated memory
    free(ptr);
    free(temp);

    return 0;
}

