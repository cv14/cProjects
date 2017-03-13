/*************************	
	Saurav Paudyal
	CV14
	MUTD209
	
Write the function htoi(s), which converts a string of hexadecimal
digits (including an optional 0x or 0X) into its equivalent integer
value. The allowable digits are 0 through 9, a through f, and
A through F.


*************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

void hexToint(char s1[]);

int main(void)
{
	char s1[] = "0xFA9C";
	char s2[] = "0XFFFF";
	char s3[] = "0x1111";
	char s4[] = "0xBCDA";
	char s5[] = "ABB";
	
	hexToint(s1);
	hexToint(s2);
	hexToint(s3);
	hexToint(s4);		
	hexToint(s5);
}

void hexToint(char s1[]){
	int t = 0;
        t = strlen(s1);
        int sum = 0;

        for (int i = 0; s1[i] != '\0'; i++) {
                if(s1[i] == '0' && toupper(s1[i+1]) == 'X'){
                        i=i+2;
                        t = t-2;
                }
                

                if(s1[i] >= '0' && s1[i] <= '9'){
                        sum = sum + (pow(16,t-1) * (s1[i] - '0'));
                        t = t-1;
                }else if(toupper(s1[i]) >= 'A' && toupper(s1[i]) <= 'F'){
                        sum = sum + pow(16,t-1) * (toupper(s1[i]) - 'A'  + 10);
                        t = t-1;
                }       
	}               

        printf("%d\n", sum);
}	
