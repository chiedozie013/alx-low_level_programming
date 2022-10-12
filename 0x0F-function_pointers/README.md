File (0-print_name.c) a function that prints a name.
Prototype: void print_name(char *name, void (*f)(char *));

File (1-array_iterator.c) a function that executes a function given as a parameter on each element of an array.
Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
where size is the size of the array
and action is a pointer to the function you need to use

File (2-int_index.c) a function that searches for an integer.
Prototype: int int_index(int *array, int size, int (*cmp)(int));
where size is the number of elements in the array array
cmp is a pointer to the function to be used to compare values
int_index returns the index of the first element for which the cmp function does not return 0
If no element matches, return -1
If size <= 0, return -1 

File (100-main_opcodes.c) a program that prints the opcodes of its own main function.

Usage: ./main number_of_bytes
Output format:
the opcodes should be printed in hexadecimal, lowercase
each opcode is two char long
listing ends with a new line
see example
You are allowed to use printf and atoi
You have to use atoi to convert the argument to an int
If the number of argument is not the correct one, print Error, followed by a new line, and exit with the status 1
If the number of bytes is negative, print Error, followed by a new line, and exit with the status 2
You do not have to compile with any flags
Note: if you want to translate your opcodes to assembly instructions, you can use, for instance udcli.

Note 0: je is equivalent to jz
Note 1: depending on how you write your main function, and on which machine you compile your program, the opcodes (and by extension the assembly code) might be different than the above example
