#include<stdio.h>
int main(){
	
	FILE *fp;
	fp = fopen("test.txt","w");
	fprintf(fp,"Test for fprintf\n");
	fputs("This is a test for fputs",fp);
	fclose(fp);
	return 0;
}
