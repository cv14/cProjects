/*************************
	Saurav Paudyal
        CV14
        MUTD

Write a program to copy its input to its output,
replacing each tab by \t, each backspace by \b,
and each backslash by \\. This makes tabs and 
backspaces visible in an unambiguous way.

*************************/

#include<stdio.h>

int main()
{
	int c1; 
	while((c1 = getchar()) != EOF){
		if(c1 == '\t'){
 			putchar('\\'); putchar('t');
		}
		if(c1 == '\b'){
			putchar('\\'); putchar('b');
		}	
		if(c1 == '\\'){
			putchar('\\'); putchar('\\');
		}else{
			putchar(c1);
		}
	}



}
