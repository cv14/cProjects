/**********************
	Saurav Paudyal
	CV14
	MUTD209

Write a program detab that replaces
tabs in the input with the proper
number of blanks to space to the next 
tab stop. Assume a fixed set of tab stops,
say every n columns. Should n be a variable
or a symbolic parameter?
- n could be anything. If we are trying to
make a fix tab that cannot be changed in the
future then it should be symbolic parameter.
	If we are trying to channge the 
definition of tab in the future we can 
*************************/
#include<stdio.h>
#define TAB 6
int len;

int getline1(char s[], int lim);
void detab(char s[], int len);

int main(){
	char line[1000];
	
	while((len = getline1(line, 1000)) > 0){		
		detab(line,len);
	}	

}
void detab(char s[], int len){
	for(int i = 0; i < len; i++){
                while(s[i] == '\t'){
                        for(int j = 0; j < TAB; j++){
                                putchar(' ');
                        }
                        break;
                }
                if(s[i] != '\t'){ putchar(s[i]); }
        }	
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

