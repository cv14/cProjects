/*****************************	
	Saurav Paudyal
	CV14
	MUTD209
Write a program to check a C program for rudimentary
syntax errors like unbalanced parentheses, brackets and braces.
Don't forget about quotes, both single and double,
escape sequences, and comments. 
(This program is hard if you do it in full generality.)


This is not completed.


****************************/
#include<stdio.h>
int getline1(char s[], int lim);


int main()
{
	char line[1000];
	int len;
	int button = 0;
	int p = 0;
	int bk = 0, br = 0, sq = 0, dq = 0;
	
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
				if(line[i] == '['){ p++;  }
				if(line[i] == ']'){ p--;  }
				if(line[i] == '('){ bk++; }
                                if(line[i] == ')'){ bk--; }
				if(line[i] == '{'){ br++; }
                                if(line[i] == '}'){ br--; }
				if(line[i] == '\''){ sq++; printf("increased"); }
                                if(line[i] == '\''){ sq--; printf("decreased"); }
				if(line[i] == '\"'){ dq++; }
                                if(line[i] == '\"'){ dq--; } 
			}
		}
	}
	
	printf("%d\n",p);
	printf("%d\n",bk);
	printf("%d\n",br);
	printf("%d\n",sq);
	printf("%d\n",dq);	
	
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

