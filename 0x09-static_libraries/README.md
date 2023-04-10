C - Static libraries

What is a static library, how does it work, how to create one, and how to use it
Basic usage of ar, ranlib, nm


(1) Create the static library libmy.a containing all the functions listed below:

* To convert all the .c files to .o "gcc -c *.c"

* To move the .o files to the library "ar rcs libmy.a *.o"

* to create the library file "ar rcs libmy.a"
