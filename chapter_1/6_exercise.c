/************************
	Saurav Paudyal
        CV14
        MUTD

Verify that the expression getchar() != EOF is 0 or 1.

*************************/

#include<stdio.h>

int main()
{
	
	if(getchar() != EOF == 0){
	printf("print this line if getchar() != EOF is not true\n");
	}else{
	printf("print this line if getchar() != EOF is true\n");
	}

}
