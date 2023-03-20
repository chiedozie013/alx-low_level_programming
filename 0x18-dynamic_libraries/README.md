File 0 - Create the dynamic library libdynamic.so containing all the functions listed below:

File 1 - Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

File 100  - I know, you’re missing C when coding in Python. So let’s fix that!

Create a dynamic library that contains C functions that can be called from Python. See example for more detail.

File 101 - I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9. If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?

Our mole got us a copy of the program, you can download it here. Our mole also gave us a piece of documentation:

# Steps..

## Task 1
a. Copy all those functions listed in the prototypes into the 0x18 folder. Create the prototypes in main.h too.
b. Compile them using
    gcc -c -fPIC *.c
c. Create the dynamic library using
    gcc -shared -o libdynamic.so *.o

## Task 2
Create a script using a and b above but change the name of the dynamic lib to liball.so also, don't forget to make the script executable
