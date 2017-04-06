/*************************	
	Saurav Paudyal
	CV14
	MUTD209

Write a function invert(x,p,n) that returns 
x with the n bits that begin at position p 
inverted (i.e., 1 changed into 0 and vice versa), 
leaving the others unchanged.

Solution below is not mine.
******************************************************
Solution by  Gregory Pietsch and Pilcrow.

Orignally available at:

http://clc-wiki.net/wiki/K%26R2_solutions:Chapter_2:Exercise_7

******************************************************

************************/
#include<stdio.h>

unsigned invert(unsigned x, int p, int n)
{
	return (x ^ (((1 << (n)) - 1) << (p - n + 1)));
}

int main(void)
{
  unsigned x;
  int p, n;

  for(x = 0; x < 700; x += 49)
    for(n = 0; n < 8; n++)
      for(p = 0; p < 8; p++)
        printf("%x, %d, %d: %x\n", x, p, n, invert(x, p, n));
  return 0;
}
