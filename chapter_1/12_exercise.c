/************************	
	Saurav Paudyal
        CV14
        MUTD

Write a program that pronts its input
one word per line.
*************************/

#include<stdio.h>


int main()
{
	int c1,state;
	
	state = 0;	

	while((c1 = getchar()) != EOF){
		if(c1 == ' ' || c1 == '\t' || c1 == '\n'){
			if(state == 0){
			printf("\n");
			}
		state++;
		}else{
			state = 0;	
			printf("%c", c1);
		}
	}
	
}
