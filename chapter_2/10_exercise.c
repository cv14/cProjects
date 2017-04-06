/*************************	
	Saurav Paudyal
	CV14
	MUTD209

Rewrite the function lower, which converts
upper case letters to lower case, with a 
conditional expression instead of if-else.

************************/

#include<stdio.h>

int main(){

	char c;

	while(( c = getchar()) != EOF){
	/*	if(c >= 65 && c <= 90){
			putchar(c+32);
		}
	*/	
		c = (c >= 65 && c <= 90) ? putchar(c+32) : putchar(c);
	}

}
