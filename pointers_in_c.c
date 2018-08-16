#include<stdio.h>
const int MAX = 4;
int main(){
	
	char *names[] = {"abc","def","ghi","lpo"};
	int i;
	for(i = 0; i<MAX; i++)
		printf("%s\n",names[i]);
	return 0;
}
