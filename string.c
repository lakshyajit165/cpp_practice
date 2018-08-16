#include<stdio.h>
#include<string.h>
int main(){
	
	char s1[12] = "Hello";
	char s2[12] = "World";
	char s3[12];
	char str1[6] = "World"; 
	strcpy(s3,s1);
	printf("%s\n",s3);
	strcat(s1,s2);
	printf("%s\n",s1);
	int compare1 = strcmp(s1,s2);
	int compare2 = strcmp(s3,s2);
	printf("strcmp1 = %d, strcpm2 = %d\n",compare1,compare2);
	printf("%d\n",*strchr(s1,'l'));
	printf("%d\n", *strstr(s1,str1));
	return 0;
}
