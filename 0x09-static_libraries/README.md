File(libmy.a) is a static library.

File(create_static_lib.sh) is a script that creates a static library called liball.a from all the .c files that are in the current directory.

File (main.h) is a header file containing all the prototypes of the functions stored in the libmy.a library.

### 0x09. C - Static libraries
This is the step by step process for the solving the static library project!

1. Create the 0x09... Folder and move all files into the library.

2. Create a main.h file that contains the prototype of all this functions.

3. You can start the creation of your static library
First

gcc -c *.c

(This will create a .o file from all the .c files)

Then to archive do

ar -rc libmy.a *.o

Then to index do

ranlib libmy.a

To confirm

ar -t libmy.a

Use .gitignore to ignore *.0 and *.c files before pushing to github





