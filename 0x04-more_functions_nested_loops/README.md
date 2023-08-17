C - Increasing Functions and Nested Loops
0. Uppercase Character Check
Create a function to verify if a character is uppercase.

Prototype: int isupper(int c);
Returns 1 if the character is uppercase
Returns 0 otherwise
1. Digit Check
Develop a function to identify a digit (0 through 9).

Prototype: int isdigit(int c);
Returns 1 if the character is a digit
Returns 0 otherwise
2. Synergy in Multiplication
Craft a function that calculates the product of two integers.

Prototype: int mul(int a, int b);
3. Numeric Expressions
Construct a function to print numbers from 0 to 9, followed by a new line.

Prototype: void print_numbers(void);
Only use _putchar twice in your code
4. Embracing Positivity
Design a function to print numbers from 0 to 9, except 2 and 4, followed by a new line.

Prototype: void print_most_numbers(void);
Only use _putchar twice in your code
5. Amplifying Numbers
Develop a function to print the numbers from 0 to 14, repeated 10 times, followed by a new line.

Prototype: void more_numbers(void);
Only use _putchar three times in your code
6. Drawing Straight Lines
Build a function to draw a straight line in the terminal.

Prototype: void print_line(int n);
Only use _putchar to print
'n' specifies the number of times the character _ should be printed
The line ends with a \n
If n is 0 or less, the function only prints \n
7. Diagonal Art
Create a function to draw a diagonal line in the terminal.

Prototype: void print_diagonal(int n);
Only use _putchar to print
'n' specifies the number of times the character \ should be printed
The diagonal ends with a \n
If n is 0 or less, the function only prints a \n
8. Geometric Patterns
Design a function to print a square, followed by a new line.

Prototype: void print_square(int size);
Only use _putchar to print
'size' represents the size of the square
If size is 0 or less, the function prints only a new line
Use the character # to print the square
9. Fizz-Buzz Challenge
Implement a program that prints numbers from 1 to 100, replacing multiples of three with Fizz, multiples of five with Buzz, and multiples of both three and five with FizzBuzz.

Separate numbers and words with spaces
Allowed to use the standard library
10. Triangular Display
Create a function to print a triangle, followed by a new line.

Prototype: void print_triangle(int size);
Only use _putchar to print
'size' specifies the size of the triangle
If size is 0 or less, the function prints only a new line
Use the character # to print the triangle
11. Prime Factorization
The prime factors of 1231952 are 2, 2, 2, 2, 37, and 2081.

Develop a program to find and print the largest prime factor of the number 612852475143, followed by a new line.

Allowed to use the standard library
Compilation command: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm
12. Numerical Representation
Create a function to print an integer.

Prototype: void print_number(int n);
Only use _putchar to print
Not allowed to use long
Not allowed to use arrays or pointers
Not allowed to hard-code special values
