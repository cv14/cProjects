/*

Write the function strrindex(s,t), which returns the position
of the rightmost occurrence of t in s, or -1 if there is none.

cv14*/
#include <stdio.h>
#include <string.h>

int strrindex(char s[], char t[]){

    int n = strlen(s);
    int k;

    for(int i = n-1; i >= 0; i--){
      for(int j = i, k = strlen(t) - 1; s[j] == t[k];j--, k--){
        if((s[j] == t[k]) && k == 0){
          return j;
        }
      }

    }

    return -1;
}

int main(void){

  char ss[] = "sambo ji ko parsad lai hela garnu hudaina. Jai sambo.G kam vo";
  char tt[] = "sambo";

  printf("%d\n",strrindex(ss,tt));

}
