/************************	
	Saurav Paudyal
        CV14
        MUTD

Write a program to print a histogram of 
the lengths of words in its input. It is
easy to draw the histogram with the bars
horizontal; a vertical orientation is more
challenging.

FOR TESTING:
abcdefghijklmnopqrstu


NOTE : There shoule be one star at 21.
*************************/

#include <stdio.h>

void pp(int i){
	for ( int j = 0; j < i; j++)
		printf("*");
}


int main()
{
	int hist[21];
	int count, a;

	for(int i = 0; i < 21; i++)
	{	
		hist[i] = 0;
	}

	count = 0;
	while((a = getchar()) != EOF){
		if( a == ' '|| a == '\n' || a == '\t'){
			hist[count - 1]++;
			count = 0;  	
		}else{
	 		count++; 
		}	 	

	}

	for(int i = 0; i < 21; i++)
	{
		printf("%2d  | ",i+1);
		pp(hist[i]);
		printf("\n");
 
	}
	printf("\n");
}



