/*************************
	Saurav Paudyal
	CV14
	MUTD209

Write a program to print a histogram
of the frequencies of different characters
in its input. 

FOR TEST:

~
Should print two * at ~.

*************************/

#include <stdio.h>

void pp(int i){
	for ( int j = 0; j < i; j++)
		printf("*");
}


int main()
{	
	int a;
	char letter[95];
	int counter[95];
	
	for(int i = 0; i < 95; i++){
                letter[i] = ' ' + i;
        }
	
        int n = sizeof(counter)/sizeof(counter[0]);	
	
	for(int i = 0; i < n; i++){
		counter[i] = 0;
	}
		
	
	while((a = getchar()) != EOF){
		for( int i = 0; i < 95; i++){
			if( a == letter[i]){
				counter[i] = counter[i] + 1;
			}	
		}
		
		}

	for(int i = 0; i < 95; i++){
		printf("%c  | ",letter[i]);
		pp(counter[i]);
		printf("\n");
 
	}

	printf("\n");	

}
