#include<stdio.h>
int main(int argc, char *argv[]){
	
	int year;
	year = atoi(argv[1]);
	if((year%400) == 0 || (year%100!=0 && year%4 == 0))
		printf("Leap Year!");
	else
		printf("Not a Leap Year!");	
	return 0;
}
