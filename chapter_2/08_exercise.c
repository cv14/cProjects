/*************************	
	Saurav Paudyal
	CV14
	MUTD209

Write a function rightrot(x,n) that returns the value
of the integer x rotated to the right by n bit postions.

Solution below is not mine.
******************************************************
Solution by Gregory Pietsch and Bob Wightman

Orignally available at:

http://clc-wiki.net/wiki/K%26R2_solutions:Chapter_2:Exercise_8

**************************/
unsigned rightrot(unsigned x, unsigned n)
{
    while (n > 0) {
        if ((x & 1) == 1)
            x = (x >> 1) | ~(~0U >> 1);
        else
            x = (x >> 1);
        n--;
    }
    return x;
}

/* main driver added, in a hurry while tired, by RJH. Better test driver suggestions are welcomed! */

#include <stdio.h>

int main(void)
{
  unsigned x;
  int n;

  for(x = 0; x < 700; x += 49)
    for(n = 1; n < 8; n++)
      printf("%u, %d: %u\n", x, n, rightrot(x, n));
  return 0;
}
