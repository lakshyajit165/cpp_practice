#include<stdio.h>
int main(int argc, char *argv[]){
	
	int n = atoi(argv[1]);
	int binary[64];
	int i = 0;
	while(n>0){
		binary[i] = n%2;
		n/=2;
		i++;
	}
	while(i){
		printf("%d",binary[--i]);
	}
	
	return 0;
}
