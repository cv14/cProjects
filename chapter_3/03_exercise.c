/*************************	
	Saurav Paudyal
	CV14
	MUTD209
Write a function expand(s1,s2) that 
expands shorthand notations like a-z 
in the string s1 into the equivalent 
complete list abc...xyz in s2 . Allow 
for letters of either case and digits, 
and be prepared to handle cases like a-b-c 
and a-z0-9 and -a-z . Arrange that a 
leading or trailing - is taken literally.

************************/
#include <stdio.h>
#include <string.h>

void expand(char s1[], char s2[]);

void expand(char s1[], char s2[]){
	printf("%s\n", s1);
	int i,j,count;
        count=i=j=0;
	char c[5];

        while(s1[i] != EOF){
                if(s1[i] >= 'a' && s1[i] <= 'z'){
                        c[j] = s1[i];
                        j++;
                }else if(s1[i] >= '0' && s1[i] <= '9'){
                        c[j] = s1[i];
                        j++;
                }
                i++;
        }

        i = 1;
        char temp = c[0];

        while(i != j){
                while(temp != c[i]){
                        if(c[i] == '0'){
                                temp = c[i];
                                break;
                        }
			s2[count++] = temp;
                        temp++;
                }
        i++;
        }

	s2[count] = temp;	
}

int main(void){
	
//	char a[] = "a-z";
//	char a[] = "a-b-c";
//	char a[] = "-a-z";
	char a[] = "a-z0-9";

	char s2[100];
	
	expand(a,s2);	
	printf("%s\n",s2);
}
