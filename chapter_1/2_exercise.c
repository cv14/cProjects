/************************
	Saurav Paudyal
        CV14
        MUTD

:THE CODE BELOW WAS NOT WRITTEN BY ME, I USED THE WORK OF
RICHARD HEATHFIELD.

ORIGINAL CODE COULD BE FOUND AT:
http://clc-wiki.net/wiki/K%26R2_solutions:Chapter_1:Exercise_2

Solution by Richard Heathfield

By 'above', the question is referring to: 
\n (newline) 
\t (tab) 
\b (backspace) 
\" (double quote) 
\\ (backslash)
We have to tread carefully here, because using a non-specified
escape sequence invokes undefined behaviour. The following program
attempts to demonstrate all the legal escape sequences, not including
the ones already shown (except \n , which I actually need in the program),
and not including hexadecimal and octal escape sequences.



*************************/

#include<stdio.h>


int main(void)
{	

 printf("Audible or visual alert. \a\n");  
 printf("Form feed. \f\n");
 printf("This escape, \r, moves the active position to the initial position of the current line.\n");
 printf("Vertical tab \v is tricky, as its behaviour is unspecified under certain conditions.\n");

}
