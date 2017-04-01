/***********************
	Saurav Paudyal
	CV14
	MUTD209
	
Write an alternate version of squeeze(s1,s2)
that deletes each character in the string s1
that matches any character in the string s2 .

**********************/

#include<stdio.h>
void squeeze1(char s[], int c)
{

	int i, j;

	for (i = j = 0; s[i] != '\0'; i++)
		if (s[i] != c)
			s[j++] = s[i];

	s[j] = '\0';

}

void squeeze(char s1[], char s2[]){
	int j; 

	for(j = 0; s2[j] != '\0'; j++){
		squeeze1(s1,s2[j]);
	}
}

int main(){
	char s1[] = "Saurav is a good boy";
	char s2[] = "zxlq qqqqq nnnnnmmmm S s";
	
	squeeze(s1, s2);
        	
	
				
	printf("%s",s1);
	printf("\n");

}
	
