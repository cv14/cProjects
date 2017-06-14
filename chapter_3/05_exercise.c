/*********************
	Saurav Paudyal
	CV14
	MUTD209

Write the function itob(n,s,b)
that converts the integer n into
a base b character representation
in the string s . In particular,
itob(n,s,16) formats n as a hexadecimal
integer in s .

************************/

#include <stdio.h>

void itob(int n, char s[], int b);
void reverse(char s[]);

int main(void)
{
	char s[100];

	for (int i = 2; i <= 20; i++) {
		itob(127, s, i);
		printf("decimal 128 in base %-2d : %s\n", i, s);
		printf("\n");
	}

	return 0;
}

void itob(int n, char s[], int b){

	int i = 0;
	int t = n;

	while( n != 0){
		t = n/b;
		if((n % b) > 9){
			s[i++] = (n % b) - 10 + 'A';
			n = t;
		}else{
		s[i++] = (n % b) + '0';
		n = t;
	}
	}

	s[i] = '\0';
	reverse(s);

}

void reverse(char s[])
{
	int i, j, t;

	for (j = 0; s[j] != '\0'; j++)
		;
	for (i = 0, --j; j > i; i++, j--) {
		t = s[j];
		s[j] = s[i];
		s[i] = t;
	}
}
