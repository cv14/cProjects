/*******************************
Write a version of itoa that accepts three arguments instead of two. The third
argument is a minimum field width; the converted number must be padded with
blanks on the left if necessary to make it wide enough.

cv14
**************/
#include <stdio.h>
#include <string.h>
#include <limits.h>

void reverse(char s[]){
        int c, i, j;

        for(i = 0, j = strlen(s) - 1; i < j; i++, j--){
                c = s[i];
                s[i] = s[j];
                s[j] = c;
        }
}

void itoaTemp(int n, char s[], int w){
	int i , sign, sp;

	if((sign = n) < 0){
		n = -n;
	}

	i = 0;

	do{
		s[i++] = n % 10 + '0';
 	}while((n /= 10) > 0);

  if( i == w){
    	if(sign < 0){
    		s[i++] = '-';
    	}
    	s[i] = '\0';
    	reverse(s);
  }else{
      sp = w - i;
      while(sp != 0){
        s[i++] = ' ';
        sp = sp - 1;
      }
      if(sign < 0){
    		s[i++] = '-';
    	}
    	s[i] = '\0';
    	reverse(s);


  }
}

int main(void){

	char s[19];
	//itoa(10, s);
  itoaTemp(100, s, 5);

	printf("%s",s);
  printf("\n");
}
