/*************************
	Saurav Paudyal
        CV14
        MUTD

Write a program to count blanks, tabs, and newlines.	

*************************/

#include<stdio.h>

int main()
{
	int c1, bl = 0, tbs = 0, nl = 0;

	while((c1 = getchar()) != EOF){
		putchar(c1);
		if(c1 == ' '){
		bl++;	
		}
		if(c1 == '\t'){
		tbs++;
		}
		if(c1 == '\n'){
		nl++;
		}	
	}
	
	printf("spaces = %d\ntabs = %d\nnew lines = %d\n",bl, tbs, nl);




}
