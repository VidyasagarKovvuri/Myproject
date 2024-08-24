#include <stdio.h>
#include <stdlib.h>

int main() {
    // String to integer
    //char str1[] = "12345";
	char str1[] = "sagar";
    int num1 = atoi(str1);
    printf("String \"%s\" converted to integer is %d\n", str1, num1);

    // String to long
    char str2[] = "123456789";
    long num2 = atol(str2);
    printf("String \"%s\" converted to long is %ld\n", str2, num2);

    // String to double
    char str3[] = "123.45";
    double num3 = atof(str3);
    printf("String \"%s\" converted to double is %f\n", str3, num3);

    // Using strtol for more robust conversion with error checking
    char *endptr;
    char str4[] = "6789";
    long num4 = strtol(str4, &endptr, 10);
    if (*endptr == '\0') {
        printf("String \"%s\" successfully converted to long is %ld\n", str4, num4);
    } else {
        printf("Conversion of string \"%s\" stopped at \"%s\"\n", str4, endptr);
    }

    // Using strtod for double conversion with error checking
    char str5[] = "456.78";
    double num5 = strtod(str5, &endptr);
    if (*endptr == '\0') {
        printf("String \"%s\" successfully converted to double is %f\n", str5, num5);
    } else {
        printf("Conversion of string \"%s\" stopped at \"%s\"\n", str5, endptr);
    }

    return 0;
}

