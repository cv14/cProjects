/***************************	
	Saurav Paudyal
	CV14
	MUTD209

Write a function reverse(s) that reverses
the character string s . Use it to write
a program that reverses its input a line
at a time.
*************************/
#include<stdio.h>
int len;
void reverse(char s[]);
int getline1(char s[], int lim);

int main(){

	char ex[] = "12345";
	printf("%s\n",ex);

	len = sizeof(ex)/sizeof(ex[0]);
	reverse(ex);

	char line[1000];	
	while((len = getline1(line, 1000)) > 0){
		reverse(line);
	}
}

void reverse(char s[]){
	char a, b;
	int j;
	j = len-2;

		
	for(int i = 0; i < len/2; i++){
		a = s[i];
		b = s[j];
		//printf("a = %c b = %c",a,b);
		s[i] = b;
		s[j--] = a;			
	}
	printf("%s",s);
}

int getline1(char s[], int lim){
	int c, i;
	
	for(i = 0; i < lim -1 && (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	
	if(c == '\n'){
		s[i] = c;
		++i;
	}

	s[i] = '\0';
	return i;
}

