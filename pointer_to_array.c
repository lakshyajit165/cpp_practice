#include<stdio.h>
int main(){
	
	int i,A[5];
	for(i=0; i<5; i++)
		scanf("%d",&A[i]);
	int *p;
	p = A;
	printf("\n");
	for(i = 0; i<5; i++)
		printf("%d ",*(p+i));	
	return 0;
}
