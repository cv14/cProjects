/***********************
	Saurav Paudyal
        CV14
        MUTD209

Rewrite the temperature conversion program of 
Section 1.2 to use a function for conversion.

*************************/
#include<stdio.h>

int conv(int f);

int main()
{
	float fahr, c;
	int l, u, s; 
	l = 300; u = 0; s = 20;

	fahr = l ;
	printf("Cel  Faren \n");
	while(fahr >= u){
		c = conv(fahr);
		printf("%3.0f %6.1f\n", fahr, c);
		fahr= fahr - s;
	}
}

//conv: converts the passed farenheit to celsius
int conv(int f){
	return (9 * f/5) + 32;	
}

