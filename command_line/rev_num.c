#include<stdio.h>
int main(int argc, char *argv[]){
	
	int num,digit,rev = 0;
	num = atoi(argv[1]);
	while(num!=0){
		digit = num % 10;
		rev = rev*10 + digit;
		num /= 10;
	}
	if(rev == atoi(argv[1])){
		printf("Number is a palindrome");
	}else{
		printf("Reversed number = %d", rev);
	}
	return 0;
}
