#include<stdio.h>
int GCD(int x, int y){
	if(y == 0)
		return(x);
	else
		return(GCD(y,x%y));	
}
int main(int argc, char *argv[1]){
	
	int a,b;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("GCD = %d",GCD(a,b));
	return 0;
}
