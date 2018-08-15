#include<stdio.h>
#include<time.h>
int *getRandom(){
	
	static int r[10];
	int i;
	srand(time(0));
	for(i = 0; i<10; i++){
		r[i] = rand();
		printf("r[%d] = %d\n",i,r[i]);
	}
	return r;
}
int main(){
	
	int i,*p;
	p = getRandom();
	for(i = 0; i<10; i++)
		printf("%d ",*(p+i));
	
	return 0;
}
