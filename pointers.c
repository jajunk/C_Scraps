#include <stdio.h>

void increment(int *numberToIncrementPtr)  // note that it accepts a pointer to an int
{
    *numberToIncrementPtr = *numberToIncrementPtr + 1;  // add one to the thing p points to
}

int main(void) {
    int first_int = 10;
    int *j_ptr = &first_int;  // note the address-of; turns it into a pointer to first_int

    printf("first_int %d\n", first_int);       // prints "10"
    printf("first_int is also %d\n", *j_ptr);  // prints "10"

    increment(j_ptr);  // j_address is an int*--to first_int

    printf("first_int is %d\n", first_int);  // prints "11"!
}