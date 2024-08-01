// #include directive //

/*In C programming,
 the #include directive is used 
 to include header files in your source code.
 Header files contain declarations of 
 functions, macros, and other entities
 that are defined in the C standard library
 or in third-party libraries.

The #include directive
 is typically used at the beginning
 of a source file, before any function
 or variable declarations. It allows you
 to use the functions and data types defined
 in the included header files in your code.
*/

#include <stdio.h>


// Variables and data types //
/* Variables are declared by specifying the data type,
   followed by the variable name.
   Data types include int, float, char, double, etc.
*/

int numbers[5];
char name[10];
int age;
float temperature;
char grade;
int a;
int b;


// Assigment Operator //
// The assignment operator (=) is used to assign a value to a variable. //

a = 50
b = 60
age = 25;
temperature = 35.1;
grade = 'A';


// Arithmetic operators //
// Arithmetic operators include +, -, *, /, and %. //

int sum = a + b;
int difference = a - b;
int product = a * b;
float quotient = (float)a / b;
int remainder = a % b;


// Comparison operators include ==, !=, <, >, <=, and >=.

if (a == b) {
   // code to execute if a is equal to b
}


// Logical operators include &&, ||, and !. //

if (a > 0 && b > 0) {
   // code to execute if both a and b are greater than 0
}


// Main function in C //

/* the main function is required by the language standard.
Without the main function,
the program will not be considered a valid C program.
The main function serves as the entry point of the program,
and it is where the execution begins.

The printf function in C is a versatile function 
that allows you to print formatted output to the console.
The syntax of the printf function is printf(format, ...),
where format is a string that specifies the format of the output,
and ... is a variable number of arguments that provide the values
to be printed.

The %s format specifier is used to print a string.
When you use printf("%s\n", "word"), 
the %s specifier tells printf to expect a string argument,
which is then printed to the console.

The \n character is used to insert a newline character,
which moves the cursor to the next line.
*/

int main()
{
	printf("%s\n", ); // code to execute// 
	return 0;
}


// integer types //

int age = 25; // is typically 2 or 4 bytes //
short temperature = 98; // is typically 2 bytes //
long population = 7800000000; // is typically 4 or 8 bytes //
long long distance = 9460730472580800; // is typically 8 bytes //



// Floating-Point Types //

/*
    float: Represents a single-precision floating-point number.
     The size of a float is typically 4 bytes.
    double: Represents a double-precision floating-point number.
     The size of a double is typically 8 bytes.
    long double: Represents an extended-precision floating-point number.
     The size of a long double depends on the compiler and the platform.
*/

float temperature = 98.6;
double pi = 3.14159265358979323846;
long double e = 2.71828182845904523536028747135266249775724709369995;



// Character Types //
/*
char: Represents a single character.
The size of a char is typically 1 byte.
*/
char grade = 'A';


// Boolean Type //

/* In C99 and later versions,
 the _Bool data type is used to represent
 a boolean value, which can be either true (1) or false (0).
 
 Additionally, the stdbool.h header file defines the bool,
 true, and false keywords, which can be used as aliases
 for _Bool, 1, and 0, respectively.
*/

#include <stdbool.h>

int main() {
   bool is_valid = true;

   if (is_valid) {
      printf("The value is valid.\n");
   } else {
      printf("The value is not valid.\n");
   }

   return 0;
}


// Void Types //

/*
void: Represents the absence of a type. 
It is used in function declarations 
to indicate that the function does not return a value.
*/

void print_message(void) {
   printf("Hello, World!\n");
}

// TODO: derived types //
