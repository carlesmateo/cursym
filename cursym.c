#include<stdio.h>

// cursym - Currency symbols
// Is a very simple utility to print the pound, and other signs
// It is useful when you jumping from ssh to ssh and have incompatibilites
// in the keyboard configuration, or using virtual / emulated platforms.
// You run the app, and get the symbols that can then copied and pasted 
// Useful for reproducing accents in US Keyboards and to try URL sanitize
// methods from strings
//
// Compile it with:
//    gcc cursym.c -o cursym-linux64bit
// or gcc cursym.c -o cursym-linux32bit
// or gcc cursym.c -o cursym-linuxarm
// Copy the executable to /usr/bin and create a symbolic link as cursym

main() {
	printf("Currencies symbols cursym V1.0 by Carles Mateo\n");
	printf("==============================================\n");
	printf("Pound : £\n");
	printf("Euro  : €\n");
	printf("Dollar: $\n");
	printf("\n");
	printf("Catalan characters and more: çÇàáäâèéëêìíïîòóôöùúüû·¿?¡!ªº@`'\n");
	printf("\n");
}
