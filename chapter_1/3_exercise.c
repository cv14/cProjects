/************************
	Saurav Paudyal
        CV14
        MUTD

Modify the temperature conversion
program to print a heading above the table.

Here I also modified the program to print
celcius to fahrenheit.
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
	


