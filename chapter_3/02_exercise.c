/*************************	
	Saurav Paudyal
	CV14
	MUTD209
Write a function escape(s,t) that
converts characters like newline and 
tab into visible escape sequences like
\n and \t as it copies the string t to s.
Use a switch . Write a function for the 
other direction as well, converting escape 
sequences into the real characters.

************************/
#include <stdio.h>

void escape(char s[], char t[]);
void unescape(char s[], char t[]);

int main(void) {
    char text1[50] = "\aHello,\n\tWorld! Mistakee\b was \"Extra 'e'\"!\n";
    char text2[51];
    
    printf("Original string:\n%s\n", text1);
     
    //unescape(text1, text2);
    //printf("Unescaped string:\n%s\n", text1);
	
	escape(text2, text1);
	putchar('\n');
	printf("Escaped string:\n%s\n", text2);

	unescape(text1, text2);
        putchar('\n');
        printf("Unescaped string:\n%s\n", text1);	
}

void escape(char s[], char t[]){
	
	int i, j;
	i = j = 0;
		
	while(t[i] != EOF){
		switch(t[i]){
			case '\n':
			  i++;
			  s[j++] = '\\';
			  s[j] = 'n';
			  break; 
			case '\t':
			  i++;
                          s[j++] = '\\';
                          s[j] = 't';
			  break;	
			case '\b':
			  i++;
                          s[j++] = '\\';
                          s[j] = 'b';
			  break;
			case '\a':
			   i++;
                          s[j++] = '\\';
                          s[j] = 'a';
			  break;
			case '\"':
			   i++;
                          s[j++] = '\\';
                          s[j] = '"';
			  break;
			default:
			  s[j] = t[i++];
			  break;
		}
		j++;	 
	}
	
}

void unescape(char s[], char t[]){
	int i, j;
	i = j = 0;
	
	 while ( t[i] ) {
        switch ( t[i] ) {
        case '\\': 
            switch( t[++i] ) {
            case 'n':
                s[j] = '\n';
                break;
                
            case 't':
                s[j] = '\t';
                break;
                
            case 'a':
                s[j] = '\a';
                break;
                
            case 'b':
                s[j] = '\b';
                break;
                
            case 'f':
                s[j] = '\f';
                break;
                
            case 'r':
                s[j] = '\r';
                break;
                
            case 'v':
                s[j] = '\v';
                break;
                
            case '\\':
                s[j] = '\\';
                break;
                
            case '\"':
                s[j] = '\"';
                break;
            default: 
                s[j++] = '\\';
                s[j] = t[i];
            }
            break;
            
        default: 
            s[j] = t[i];
        }
        ++i;
        ++j;
    }
    s[j] = t[i]; 
}
