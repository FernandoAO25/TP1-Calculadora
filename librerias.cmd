gcc -c calcu.c -o calcu.o
gcc -c funcion.c -o funcion.o
gcc -c menu.c -o menu.o
gcc -c color.c -o color.o
gcc funcion.o menu.o color.o calcu.o -o programa.exe