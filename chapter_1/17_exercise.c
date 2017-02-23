/************************	
	Saurav Paudyal
        CV14
        MUTD209

Write a program to print all input
lines that are longer than 80
characters.

*************************/
#include<stdio.h>

int getline1(char line[], int maxline);

int main(){
	char line[1000];
	int len;

	printf("Lines longer that 80 characters:\n\n");
	
	while((len = getline1(line, 1000)) > 0){
		if(len > 80){
		printf("line length: %d\n", len);	
		printf("%s\n", line);
		}	
	}

}

int getline1(char s[], int lim){
	int c, i;
	
	for(i = 0; i < lim -1 && (c =getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	
	if(c == '\n'){
		s[i] = c;
		++i;
	}

	s[i] = '\0';
	return i;
}

