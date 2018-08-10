#include<stdio.h>
int main(int argc, char *argv[]){
	
	unsigned long factorial = 1;
	int i,n = atoi(argv[1]);
	for(i = 1; i<=n; i++)
		factorial *= i;
	printf("%d",factorial);	
	return 0;
}
