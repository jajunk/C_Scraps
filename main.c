#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");

    int example_int = 4;
    int example_actor = 10;

    example_actor += example_int > 10 ? 17 : 37;  // Ternary operator example

    printf("example_actor = %d\n", example_actor);                              // example_actor is now 47 because example_int (4) is not greater than 10, so it adds 37 to example_actor (10 + 37 = 47)
    printf("example_int = %d\n", example_int);                                  // example_int is still 4
    printf("example_int + example_actor = %d\n", example_int + example_actor);  // example_int + example_actor = 4 + 47 = 51
    printf("example_int - example_actor = %d\n", example_int - example_actor);  // example_int - example_actor = 4 - 47 = -43

    // Check if x is divisible by 2 (even), otherwise it's odd
    printf("The number %d is %s \n", example_int, example_int % 2 == 0 ? "even" : "odd");
    // example_int is 4, which is even, so it prints "The number 4 is even"
    int int_looper = 1;
    printf("The value of int_looper is %d\n", int_looper);

    int_looper = int_looper + 3;  // Addition (+) and assignment (=) operators, add 3 to i
    printf("The value of int_looper is %d\n", int_looper);

    int_looper = int_looper - 8;  // Subtraction, subtract 8 from i
    printf("The value of int_looper is %d\n", int_looper);

    int_looper = int_looper * 9;  // Multiplication
    printf("The value of int_looper is %d\n", int_looper);

    int_looper = int_looper / 2;  // Division
    printf("The value of int_looper is %d\n", int_looper);

    int_looper = int_looper % 5;  // Modulo (division remainder)
    printf("The value of int_looper is %d\n", int_looper);

    int_looper += 3;  // Same as "int_looper = int_looper + 3", add 3 to int_looper
    printf("The value of int_looper is %d\n", int_looper);

    int_looper -= 8;  // Same as "int_looper = int_looper - 8"
    printf("The value of int_looper is %d\n", int_looper);

    int_looper *= 9;  // Same as "int_looper = int_looper * 9"
    printf("The value of int_looper is %d\n", int_looper);

    int_looper /= 2;  // Same as "int_looper = int_looper / 2"
    printf("The value of int_looper is %d\n", int_looper);

    int_looper %= 5;  // Same as "int_looper = int_looper % 5"
    printf("The value of int_looper is %d\n", int_looper);

    int j_looper = 5 + int_looper++;  // Add 5 to int_looper, then increment int_looper after the addition

    // Compute 5 + i, _then_ increment int_looper
    printf("%d, %d\n", int_looper, j_looper);
    // Prints 11, 15 because the value of 'int_looper' (10) is used in the expression to compute 'j_looper' (5 + 10 = 15),
    // and then 'int_looper' is incremented to 11 after the computation.
    printf("Goodbye, World!\n");
    // The above code demonstrates the use of various arithmetic operators in C.

    // Ternary Operator
    // The ternary operator is a shorthand for an if-else statement.
    // It takes three operands: a condition, a value if true, and a value if false.
    // The syntax is: condition ? value_if_true : value_if_false
    // Example:
    example_actor += example_int > 10 ? 17 : 37;
    // This means if example_int is greater than 10, add 17 to example_actor,
    // otherwise add 37 to example_actor.
    // In this case, since example_int is 4 (not greater than 10), it adds 37 to example_actor.
    // So, example_actor becomes 10 + 37 = 47.

    printf("example_actor = %d\n", example_actor);
    printf("example_int = %d\n", example_int);

    return 0;
}
