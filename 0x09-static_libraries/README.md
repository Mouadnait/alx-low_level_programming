#Alx School - 0x08-static_libraries
How and why to create static libraries.
## New commands / functions used:
``gcc -c *.c``, ``ar -rc liball.a *.o``, ``ar rcs <library_name.a> <object_file1.o> <object_file2.o> ... <object_fileN.o>``, ``gcc main.c -L. -lall``, ``ranlib``, ``nm``
## Helpful Links
* [What is a C Library?](http://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html#what_is_a_library)
* [Creating a Static Library](http://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html#creating_static_archive)
* [Using a Library in a program](http://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html#using_static_archive)
* [Static and Dynamic Linking](https://www.youtube.com/watch?v=eW5he5uFBNM)
* [Files to Find, Libraries to Compile](https://medium.com/@Concativerse/files-to-find-56a64e3ed059#.e1db59ely) - My blog post on medium about Bash commands to find source code scattered across a file system and compile them into a library. Also as a PDF in this directory.
