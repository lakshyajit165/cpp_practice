#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[]){
	
	int side1 = atoi(argv[1]);
	int side2 = atoi(argv[2]);
	side1 = pow(side1,2);
	side2 = pow(side2,2);
	int hyp = sqrt(side1+side2);
	printf("%d",hyp);
	
	return 0;
}
