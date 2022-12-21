#include "main.h"
#include <stdio.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    char str[] = "okay this	is a sample text and 1expect every;word.of this sentence to begin with a(capital)letter?and so i must ,have my wish come!true{and so it will}i hope\nand that's how it's got to be\"just how o want it";
	        char *ptr;

		    ptr = cap_string(str);
		        printf("%s", ptr);
			    printf("%s", str);
			        return (0);
}
