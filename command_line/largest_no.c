#include<stdio.h>
int main(int argc, char *argv[]){
	
	int c[10];
	int num,lar,i,j=0;
	for(i = 1; i<argc; i++){
		num = atoi(argv[i]);
		c[j] = num;
		j++;
	}
	lar = c[0];
	for(i = 1; i<10; i++){
		if(c[i] > lar)
			lar = c[i];
	}
	printf("Largest = %d",lar);
	return 0;
}
