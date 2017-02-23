/**********************
	Saurav Paudyal
	CV14
	MUTD209

Write a program to remove all comments from a C program. 
Don't forget to handle quoted strings and character 
constants properly. C comments do not nest.

************************/

#include<stdio.h>
int getline1(char s[], int lim);

int main(){
	
	char line[1000];
	int len;	
	int button = 0; 	
/*comments for testing*/
//comments for testing
	char t[] = "/* comment in string */";


	while((len = getline1(line, 1000)) > 0 ){	
		for(int i = 0; i < len; i++){
			if(line[i] == '/' && line[i + 1] == '*'){
				button = 1;	
			}
			if(line[i] == '/' && line[i - 1] == '*'){
				button = 0;
				i++;
			}
			if(line[i] == '/' && line[i+1] == '/'){
				break;
			}
			if(button == 0){
				putchar(line[i]);
			}	
		}	
	}
}

void mulrmv(char s[], int lim){
	
	int button = 0;	

	for(int i = 0; i < lim; i++){
                        if(s[i] == '/' && s[i + 1] == '*'){
                                button = 1;
                        }
                        if(s[i] == '/' && s[i - 1] == '*'){
                                button = 0;
                                i++;
                        }
                        if(button == 0){
                                putchar(s[i]);
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
