/**********************
	Saurav Paudyal
	CV14
	MUTD209

Write a program to "fold" long
input lines into two or more
shorter lines after the last 
non-blank character that occurs
before the n-th column of input.
Make sure your program does
something intelligent with very
long lines, and if there are no
blanks or tabs before the specified
column.

************************/

#include<stdio.h>
int getline1(char s[], int lim);
void folder(char s[], int len);

int len, s, r, p; 

int main(){
	char ex[] = "Write a program to fold long input lines into two or more shorter lines after the last non-blank character that occurs before the n-th column of input. Make sure your program does something intelligent with very long lines, and if there are no blanks or tabs before the specified column.\n";	
	
	 char line[1000];
	
	while((len = getline1(line, 1000)) > 0 ){
		if(len > 80){
			folder(line, len);	
		}else{
			printf("%s", line);
		}
	}
}

void folder(char line[], int len){
			s = 0;
                         p = 0;
                         while(s<len){
                                if(line[s] == ' '){ r = s; }
				if(p == 80){
                                        line[r] = '\n';
                                        p = 0;
                                }   
                                p++;
                                s++;
                        }   
                        printf ( "%s", line);  
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
