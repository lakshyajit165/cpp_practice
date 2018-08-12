#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[]){
	
	int n = strlen(argv[1]);
	printf("%d\n",n);
	int i = 0;
	char *st[n];
	for(i = 0; i<n; i++)
		*st[i] = argv[1][n-1-i];
	for(i = 0; i<n; i++)
		printf("%c",st[i]);	
	printf("%s",*st[0]);	
	if(*st == argv[1])
		printf("%s","palindrome");	
	return 0;
}
