#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
	
	float i = 0.00;
	int n = atoi(argv[1]);
	while(i*i <= n){
		i += 0.001;
	}
	i -= 0.001;
	printf("%.0f",i);
	return 0;
}
