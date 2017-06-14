/*************************
	Saurav Paudyal
	CV14
	MUTD209
In a two's complement number
representation, our version of
itoa does not handle the largest
negative number, that is, the value
of n equal to -(2 to the power (wordsize - 1)).
Explain why not. Modify it to print that value
correctly regardless of the machine on which it runs.


In a two's complment method the first left bit is used to determine the sign
of the number thus not allowing us to use it for any calculation. So if wordsize
is 4 bit long _ _ _ _. We can only calcute up to 3 bits because the first bit
is reserved as a sign bit.

************************/
#include <stdio.h>
#include <string.h>
#include <limits.h>

void reverse(char s[]){
        int c, i, j;

        for(i = 0, j = strlen(s) - 1; i < j; i++, j--){
                c = s[i];
                s[i] = s[j];
                s[j] = c;
        }
}

void itoa(int n, char s[]){
	int i , sign;

  unsigned int nTemp;



	if((sign = n) < 0){
		nTemp = -n;
	}

	i = 0;

	do{
		s[i++] = nTemp % 10 + '0';
 	}while((nTemp /= 10) > 0);

	if(sign < 0){
		s[i++] = '-';
	}
	s[i] = '\0';
	reverse(s);
}

int main(void){

	char s[19];
	itoa(INT_MIN, s);

	printf("%s",s);
  printf("\n");
}
