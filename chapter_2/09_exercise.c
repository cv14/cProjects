/*************************	
	Saurav Paudyal
	CV14
	MUTD209

Solution below is not mine.
******************************************************
Solution by  Gregory Pietsch and Pilcrow.

Orignally available at:

Solution by Gregory Pietsch

bitcount is written on p.50 as this:
bitcount:  count 1 bits in x 
int bitcount(unsigned x)
{
    int b;

    for (b = 0; x != 0; x >>= 1)
        if (x & 01)
            b++;
    return b;
}



Answer:
If x is odd, then (x-1) has the same bit representation as x except that the rightmost 1-bit is now a 0. In this case, (x & (x-1)) == (x-1).
If x is even, then the representation of (x-1) has the rightmost zeros of x becoming ones and the rightmost one becoming a zero. Anding the two clears the rightmost 1-bit in x and all the rightmost 1-bits from (x-1).
Here's the new version of bitcount:


bitcount:  count 1 bits in x
int bitcount(unsigned x)
{
    int b;

    for (b = 0; x != 0; x &= (x-1))
        b++;
    return b;
}

************************/
