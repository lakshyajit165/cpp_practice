#include<stdio.h>
int main(int argc, char *argv[]){
	
	int bin = atoi(argv[1]);
	int base = 1;
	int digit,num=0;
	while(bin!=0){
		digit = bin%10;
		num+=digit*base;
		base*=2;
	}
	printf("%lo",num);
	return 0;
}
