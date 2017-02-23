/***********************
	Saurav Paudyal
        CV14
        MUTD209

Revise the main routine of the longest-line
program so it will correctly print the length
of arbitrarily long input lines, and as
much as possible of the text.

*************************/
#include<stdio.h>
#define MAXLINE 1000

int getline1(char line[], int maxline);
void copy(char to[], char from[]);

int main(){
	int len, max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	while((len = getline1(line, MAXLINE)) > 0)
	
//	printf("%d ",len);	
		if(len > max){
			max = len;
			copy (longest, line);
		}
	printf("length of the longest line --> %d\n\n", max);

	
	if(max > 0){
		printf("Longest line is :\n\n");
		printf("%s", longest);
	}
//	return 0;
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
//	printf("%s", s);
	return i;
}

void copy(char to[], char from[]){
	int i;
	
	i = 0;
	while((to[i] = from[i]) != '\0'){
		++i;
	}
}
