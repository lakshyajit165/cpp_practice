#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[]){
	
	int a,b,c,s,area;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = atoi(argv[3]);
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area = %d",area);
	return 0;
}
