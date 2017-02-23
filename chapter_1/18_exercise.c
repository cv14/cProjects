/**************************
	Saurav Paudyal
	CV14
	MUTD209

Write a program to remove
all trailing blanks and tabs
from each line of input, and
to delete entirely blank lines.

*************************/
#include<stdio.h>

int getline1(char line[], int maxline);
int chkEmpty(char s[], int len);
void chkTrail(char s[], int len);

int main(){
	
	char line[1000];
	int len,count;
	count = 0 ;

	while((len = getline1(line, 1000)) > 0){
		if(chkEmpty(line,len) == 1){}
		else{
		    chkTrail(line,len);
		    for(int i = 0; i < len; i++){
		    	if(line[i] == '\n'){
				putchar('\n');
				break;
			}else{
				putchar(line[i]);
			}
		    }
		}
	}	

}

void chkTrail(char s[], int len){

	char lc = s[len-1];
	for(int i = len -1; i >= 0; i--){
		if(s[i] >= 33 && s[i] <= 126){
			break;
		}else{
		   s[i] = lc;   
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

int chkEmpty(char s[], int len){
//1 is true , 0 is false

	if(s[0] == '\n') return 1;

	for(int i = 0; i < len; i++){
		if(s[i] >= 33 && s[i] <= 126){
			return 0;
		}		
	}
return 1;
}
