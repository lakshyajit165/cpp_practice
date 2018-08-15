#include<stdio.h>
int main(int argc,char *argv[]){
	
	int num = atoi(argv[1]);
	int i,flag = 0;
	for(i=2; i<num/2; i++){
		if(num % i == 0){
			flag = 1;
			break;
		}
	}
	if(flag)
		printf("It is not prime");
	else
		printf("It is prime");	
	
	return 0;
}
