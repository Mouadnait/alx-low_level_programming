#Holberton School - 0x17-dynamic_libraries
Compile dynamic Libraries.

## New commands / functions used:
1. ``mkdir libtobuild && cd libtobuild && cp ../files_to_find .`` - basic setup directory with all source.
2. ``cp $(grep -F -f files_to_find $(find ~/holbertonschool-low_level_programming/ -type f -name "*.c") | grep -v -e "0x08" -e "0x17" -e "putchar" -e "main" | cut -d : -f1) .`` - Copies all C files found into the current working directory, with any of the prototypes found in the file: files_to_find. Excludes any files found with specific patterns.
3. ``for f in *.c; do grep $(echo $f | cut -d '.' -f1 | cut -d '-' -f2)\( $f | sed 's|$|\;|'; done > holberton.h`` - Creates the header.
4. ``gcc -Wall -Werror -Wextra -pedantic -g -fPIC *.c -shared -o libholberton.so`` - Creates the dynamic library.

## Helpful Links
* [Difference between Static and Dynamic Libraries](https://www.youtube.com/watch?v=eW5he5uFBNM)
* Kerrisk, Michael. <em>The Linux Programming Interface: A Linux and UNIX System Programming Handbook.</em> San Francisco, CA: No Starch Press San Francisco, CA, 2010. Print. pp. 836-847.
* [create dynamic libaries on linux](https://www.google.com/search?q=linux%2Bcreate%2Bdynamic%2Blibrary&sxsrf=APwXEdf6N911dFe7k6t1E7-xQGs_q38-Xw%3A1687217972082&source=hp&ei=NOeQZKqWA9OckdUPnZOQuAs&iflsig=AOEireoAAAAAZJD1RFg0hs-uSqsAl5mMTrL3LUUojAtO&ved=0ahUKEwiqgIjfwND_AhVTTqQEHZ0JBLcQ4dUDCAk&uact=5&oq=linux%2Bcreate%2Bdynamic%2Blibrary&gs_lcp=Cgdnd3Mtd2l6EAMyBggAEAgQHlAAWABgvwNoAHAAeACAAYsBiAGLAZIBAzAuMZgBAKABAQ&sclient=gws-wiz)
