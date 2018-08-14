#include<stdio.h>
int main(int argc, char *argv[]){
	
	int num,digit,sum=0;
	num = atoi(argv[1]);
	while(num!=0){
		digit = num % 10;
		sum+=digit;
		num /= 10;
	}
	printf("Sum of digits = %d",sum);
	return 0;
}
