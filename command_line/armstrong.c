#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[]){
	
	int num,digit,arm=0;
	num = atoi(argv[1]);
	while(num!=0){
		digit = num%10;
		arm += pow(digit,3);
		num /= 10;
	}
	if(arm == atoi(argv[1]))
		printf("It is an Armstrong Number!");
	else
		printf("Not an Armstrong Number");
	
	return 0;		
	
}
