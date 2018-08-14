#include <stdio.h>
 
/* global variable declaration */
int g = 20;
 
int main () {

  /* local variable declaration */
  int g = 10;
  
  int b;
  {
  	extern int g;
  	b = g;
  	printf("%d",b);
  }
 
  printf ("value of g = %d\n",  g);
 
  return 0;
}
