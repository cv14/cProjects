/***********************
	Saurav Paudyal
	CV14
	MUTD209

Write a program entab that replaces
strings of blanks with the minimum
number of tabs and blanks to achieve
the same spacing. Use the same stops
as for detab. When either a tab or 
a single blank would suffice to reach
a tab stop, which should be given
preference?

- Since we defined tab to be 6 spaces 
long, if we encounter a 6 spaces we will
replace it with a tab else it will be
spaces.

*************************/

#include<stdio.h>
#include<ctype.h>
#define TAB 6;

int len;

int getline1(char s[], int lim);
void entab(char ex[], int len);

int main(){
	
	 char line[1000];
	
	while((len = getline1(line, 1000)) > 0 ){
		entab(line, len);
		putchar('\n');
	}
}

void entab(char ex[], int len){
	int sp, tb;
	sp = 0; tb = 0;
        for(int i = 0; i < len - 1 ; i++){
                if(ex[i] == '\n' || (ex[i] >= 33 && ex[i] <= 126) || ex[i] == '\0'){
                        if(sp > 0 || tb > 0 ){
                                while(sp >= 6){ 
                                        putchar('\t');
                                        sp = sp - 6;    
                                }   
                                while(sp < 6 && sp > 0){ 
                                        putchar(' ');
                                        sp = sp - 1;
                                }   
                                while ( tb > 0){ 
                                        putchar('\t');
                                        tb = tb - 1 ; 
                                }   
                        }
                        putchar(ex[i]);
                } else if(ex[i] == ' '){ 
                        sp++;   
                }else if(ex[i] == '\t'){
                        tb++;
                }   
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
