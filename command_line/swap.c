#include<stdio.h>
int main(int argc, char *argv[]){
	
	int first,second,temp;
	first = atoi(argv[1]);
	second = atoi(argv[2]);
	temp = first;
	first = second;
	second = temp;
	printf("After swapping: %d %d",first,second);
	return 0;
}
