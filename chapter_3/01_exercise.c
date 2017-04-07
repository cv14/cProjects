/*************************	
	Saurav Paudyal
	CV14
	MUTD209

Our binary search makes two tests inside the loop,
when one would suffice. Write a version with only one
test inside the loop and measure the difference in
run-time.

************************/

#include<stdio.h>

int binsearch(int x, int v[], int n) {
    int low, mid, high;
    
    low = 0;
    high = n - 1;
    while ( low <= high ) {
        mid = (low+high) / 2;
        if ( x < v[mid] )
            high = mid - 1;
        else if ( x > v[mid] )
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}

int binsearch2(int x, int v[], int n) {
    int low, mid, high;
    
    low = 0;
    high = n - 1;
    while ( low <= high || v[mid] != x ) {
        mid = (low+high) / 2;
    	if(x < v[mid]){
		high = mid - 1; 
	}else{
		low = mid + 1; 
	}	
    }
    if(v[mid] == x){
	return mid;
    }
    return -1;
}

int main(){

	int a[] = {1,3,4,5,9,56,99,500};
 	
	printf("%d\n", binsearch(9,a,8));
	printf("%d\n", binsearch2(9,a,8));
}
