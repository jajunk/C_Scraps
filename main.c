#include <stdio.h>

int main(void) {
    printf("Hello, World!\n");

    int x = 4;
    int y = 10;

    y += x > 10 ? 17 : 37;

    printf("y = %d\n", y);
    printf("x = %d\n", x);
    printf("x + y = %d\n", x + y);
    printf("x - y = %d\n", x - y);

    printf("The number %d is %s \n", x, x % 2 == 0 ? "even" : "odd");
    int i = 1;
    printf("The value of i is %d\n", i);
    i = i + 3;  // Addition (+) and assignment (=) operators, add 3 to i
    printf("The value of i is %d\n", i);
    i = i - 8;  // Subtraction, subtract 8 from i
    printf("The value of i is %d\n", i);
    i = i * 9;  // Multiplication
    printf("The value of i is %d\n", i);
    i = i / 2;  // Division
    printf("The value of i is %d\n", i);
    i = i % 5;  // Modulo (division remainder)

    printf("The value of i is %d\n", i);

    i += 3;  // Same as "i = i + 3", add 3 to i
    printf("The value of i is %d\n", i);
    i -= 8;  // Same as "i = i - 8"
    printf("The value of i is %d\n", i);
    i *= 9;  // Same as "i = i * 9"
    printf("The value of i is %d\n", i);
    i /= 2;  // Same as "i = i / 2"
    printf("The value of i is %d\n", i);
    i %= 5;  // Same as "i = i % 5"
    printf("The value of i is %d\n", i);

    i = 10;
    int j = 5 + i++;
    // Compute 5 + i, _then_ increment i
    printf("%d, %d\n", i, j);
    // Prints 11, 15
printf("Hello from nano!\n");

    return 0;
}
