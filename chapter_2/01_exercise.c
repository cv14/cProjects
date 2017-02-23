/*************************	
	Saurav Paudyal
	CV14
	MUTD209

Write a program to determine the
ranges of char, short, int and long variables,
both sgined and unsigned by printing appropiate values 
from the standard headers and by direct computation.
Harder if you compute them: determine the ranges of the various
floating- point types.

************************/

#include<stdio.h>
#include <limits.h>

int main(){

  printf("\nchar: %d\n\n", CHAR_BIT);                    

  printf("Maximum char: %d\n", CHAR_MAX);        
  printf("Minimum char: %d\n\n", CHAR_MIN);      

  printf("Maximum  char: %d\n", SCHAR_MAX);        
  printf("Minimum  char: %d\n\n", SCHAR_MIN);      

  printf("Maximum  unsigned char: %u\n\n", (unsigned) UCHAR_MAX);    
  
  printf("Maximum  short: %d\n", SHRT_MAX);               
  printf("Minimum  short: %d\n\n", SHRT_MIN);             

  printf("Maximum  unsigned short: %u\n\n", (unsigned) USHRT_MAX);   


  printf("Maximum  int: %d\n", INT_MAX);                  
  printf("Minimum  int: %d\n\n", INT_MIN);                

  printf("Maximum  unsigned int: %u\n\n", UINT_MAX);      

  printf("Maximum  long: %ld\n", LONG_MAX);               
  printf("Minimum  long: %ld\n\n", LONG_MIN);            
  printf("Maximum  unsigned long: %lu\n\n", ULONG_MAX);   
}
