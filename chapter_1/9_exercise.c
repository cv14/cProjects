/*************************
	Saurav Paudyal
        CV14
        MUTD

Write a program to copy its input to its output, replacing
each string of one or more blanks by a single blank.

*************************/

#include<stdio.h>

int main()
{	
	int c1;
	while((c1 = getchar()) != EOF){
		if(c1 == ' ' || c1 == '\t'){
			while((c1 = getchar()) == ' ' || c1 == '\t'){
				if(c1 == EOF){
					break;
				}
			}
			putchar(' ');
			putchar(c1);
		}else{
			putchar(c1);
		}
	}	

}
