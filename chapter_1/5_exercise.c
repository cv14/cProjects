/************************
	Saurav Paudyal
        CV14
        MUTD

Modify the temperature conversion program to print
the table in reverse order, that is, from 300 degree
s to 0.

*************************/


#include<stdio.h>

int main()
{
	float fahr, c;
	int l, u, s; 
	l = 300; u = 0; s = 20;

	fahr = l ;
	printf("Cel  Faren \n");
	while(fahr >= u){
		c = (9 * fahr/5) + 32;
		printf("%3.0f %6.1f\n", fahr, c);
		fahr= fahr - s;
	}
}
	
